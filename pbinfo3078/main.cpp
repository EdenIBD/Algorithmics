#include <iostream>

using namespace std;

int main()
{
    int n, k, p = 1, ok = 0;

    cin >> n >> k;

    while(n){
        int cif = n%10;
        if(cif != k){
            p*=cif;
            ok = 1;
        }
        n /=10;
    }

    if(ok == 0) cout << 0;
    else cout << p;

    return 0;
}
