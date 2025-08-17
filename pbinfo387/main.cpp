#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;

    long long s = 0;

    cin >> n;

    for(int i = 1; i<=sqrt(n); i++){
        if(n % i == 0 && n/i % 2 == 0 && n/i != sqrt(n))s+= n/i;
        if(n%i == 0 && i % 2 == 0 && i != (long long)(sqrt(n)))s+= i;
        else if(n%i == 0 && i % 2 == 0 && i == (long long)(sqrt(n))) s+= i;

    }


    cout << s;
    return 0;
}
