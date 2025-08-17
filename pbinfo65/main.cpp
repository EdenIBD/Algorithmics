#include <iostream>

using namespace std;

int main()
{
    int n, p = 1, ok = 0;

    cin >> n;

    while(n){
        int cif = n%10;
        if(cif % 2 !=0) {
                p*= cif;
                ok = 1;
        }
        n /=10;
    }

    if(ok != 1) cout << -1;
    else cout << p;

    return 0;
}
