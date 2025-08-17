#include <iostream>

using namespace std;

int main()
{
    long long n, m, minn;

    cin >> n >> m;

    if(n>=m) minn = m;
    else minn = n;

    bool ok = true;
    if ( (n % 2 == 0 && m % 2 != 0) || (n % 2 != 0 && m % 2 == 0) ) {
            ok = false;
            cout << "NU";
            return 0;
    }
    if(n%2 == 0 && m % 2 == 0){
            ok = true;
    while(n % 2 == 0) n /= 2;
    while(m % 2 == 0) m /= 2;
    }

    for(long long d = 3; d*d<=minn; d=d+2){
        if(n % d == 0 && m % d == 0 ) ok = true;
        else if(n % d != 0 && m % d != 0) ok = true;
        else {
                ok = false;
                break;
        }

        while(n % d == 0) n /= d;
        while(m % d == 0) m /= d;
    }

        if(m != n) ok = false;

    if(ok == true) cout << "DA";
    else cout << "NU";

    return 0;
}
