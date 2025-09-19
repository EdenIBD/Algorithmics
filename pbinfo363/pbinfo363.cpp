#include <iostream>
using namespace std;

int main(){
    int n, i = 1, s = 0, c = 0;
    cin >> n;
    int copie = n;
    while(copie){
        c++;
        copie /= 10;
    }

    int p = 1;
    for(int j = 1; j <= c; j++)
        p *= 10;
    p /= 10;

    while(p){
        int cif = n / p % 10;
        if(i % 2 != 0) s += cif;
        i++;
        p /= 10;
    }

    cout << s; 
    return 0;
}