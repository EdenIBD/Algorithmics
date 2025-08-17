#include <iostream>

using namespace std;

int main()
{
    long long n;
    int c, rez = 0, p = 1, ok = 0;

    cin >> n >> c;

    while(n){
        int cif = n % 10;
        if(cif != c){
            rez = rez + cif*p;
            p *= 10;
            ok = 1;
        }

        n /= 10;
    }

    if(ok == 1)cout << rez;
    else cout << -1;

    return 0;
}
