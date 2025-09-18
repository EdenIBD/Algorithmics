#include <iostream>
using namespace std;

int elim_cifra(int x, int poz){
    int p1 = 1;
    for(int i = 1; i<=poz; i++) p1 *= 10;
    int p2 = p1/10;
    int rez = (x / p1) * p2 + x % p2;
    return rez;  
}

int main(){
    int n, maxx = 0, nrcif = 0;
    cin >> n;
    int copie = n;
    while(copie){
        nrcif++;
        copie /= 10;
    }

    for(int i = 1; i <= nrcif; i++)
        if(elim_cifra(n, i) > maxx)
            maxx = elim_cifra(n, i);

    cout << maxx;

    return 0;
}