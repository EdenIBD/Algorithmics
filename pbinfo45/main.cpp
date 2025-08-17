#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    bool ok = true;

    if(n < 2) ok = false;
    if(n == 2) ok = true;
    if(n % 2 == 0 && n > 2) ok = false;

    for(int i = 3; i*i <= n; i=i+2){
        if(n % i == 0)
            ok = false;
    }

    if(ok == false) cout << "NU";
    if(ok == true) cout << "DA";

    return 0;
}
