#include <iostream>

using namespace std;

int cmmnr(int n){
    int copie = n, nrcif = 0, rez = 0;
    int v[101];
    while(n){
        n /= 10;
        nrcif++;
    }

    for(int i=1;i<=nrcif;i++){
        v[i] = copie % 10;
        copie /= 10;
    }

    for(int i = 1; i < nrcif; i++){
     for(int j = i + 1; j < nrcif+1; j++){
             if( v[i] > v[j])
             {
                  int aux = v[i];
                  v[i] = v[j];
                  v[j] = aux;
               }
     }
    }
    int p = 1;
    for(int i = 1; i<=nrcif; i++){
        rez += v[i]*p;
        p *= 10;
    }

    return rez;

}

int main()
{
    cout << cmmnr(1253);
    return 0;
}
