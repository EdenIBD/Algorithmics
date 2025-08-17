#include <iostream>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    while(n % 2 == 0){
        cout << 2 << " ";
        n = n/2;
    }

    for(long long d = 3; d*d <= n; d++){
        while(n%d == 0){
                n = n / d;
                cout << d << " ";
        }
    }

    if(n>1) cout << n;
    return 0;
}
