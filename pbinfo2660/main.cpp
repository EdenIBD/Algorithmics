#include <iostream>

using namespace std;

int main()
{
    long long n;
    int p = 1;
    cin >> n;

    while(n>100){
        n = n/10;
    }

    while(n){
        p *= n%10;
        n /= 10;
    }

    cout << p;

    return 0;
}
