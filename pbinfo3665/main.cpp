#include <iostream>

using namespace std;

int main()
{
    long long n, maxpar = 0 , ok = 0;

    cin >> n;

    int copie = n;

    while(n){
        int cif = n%10;
        if(cif % 2 == 0 && cif >= maxpar){
                maxpar = cif;
                ok = 1;
        }
        n /=10;
    }

    if(ok == 0 && copie != 0) cout << 10;
    else if(copie == 0) cout << 0;
    else cout << maxpar;

    return 0;
}
