#include <iostream>

using namespace std;

void numar(int n, int k, int &x){
    x = 0;
    int copie = n, nrcif = 0;
    int v[101];
    while(n){
        n /= 10;
        nrcif++;
    }

    for(int i=0;i<nrcif;i++){
        v[i] = copie % 10;
        copie /= 10;
    }

    for(int i = 0; i < nrcif-1; i++){
     for(int j = i+1; j < nrcif; j++){
             if( v[i] < v[j])
             {
                  int aux = v[i];
                  v[i] = v[j];
                  v[j] = aux;
               }
     }
    }
    int p = 1;
    for(int i = k-1; 0<=i; i--){
        x += v[i]*p;
        p *= 10;
    }

}


int main(){
    int n, k, x;

    cin >> n >> k;

    numar(n, k, x);

    cout << x;



}


