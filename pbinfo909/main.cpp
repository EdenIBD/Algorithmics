#include <iostream>

using namespace std;

void perm(int &n){
    int rez = 0, p = 10;
    while(n>9){
        int cif = n % 10;
        rez += cif*p;
        p *= 10;

        n /= 10;
    }

    rez += n;

    n = rez;
}

int main(){
    int n;cin >> n;

    perm(n);

    cout << n;;
}
