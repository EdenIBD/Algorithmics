#include <iostream>
using namespace std;
bool palindrom(int x){
    int copie = x, ogl = 0;
    while(x){
        int cif = x % 10;
        ogl = ogl*10 + cif;

        x /= 10;
    }

    return copie == ogl;
}

int main(){
    int n, p = 0, v[100001], k = 1, c = 0;
    bool exista = false; 
    while(cin >> n && n != 0){
        cin >> n;
        v[k] = n;
        if(palindrom(n) && n > p){
            p = n;
            exista = true;
        }
        k++;
    }

    if(!exista){
        cout << "NU EXISTA";
        return 0;
    }

    for(int i = 1; i <= k; i++)
        if(v[i] == p) 
            c++;

    cout << p << " " << c;

    return 0;
}