#include <iostream>

using namespace std;

int main()
{
    long long n;
    int s = 0;
    cin >> n;

    while(n>100){
        n = n/10;
    }

    while(n){
        s += n%10;
        n /= 10;
    }

    cout << s;

    return 0;
}
