#include <iostream>

using namespace std;

void secventa(int &n){
    int p = 1, x = 0;
    while(n){
        if(n % 100 != 22){
            x = x + (n % 10)*p;
            p *= 10;
        }
        else p*=10;

        n /= 10;
    }

    n = x;

}

int main()
{
    int n;
    cin >> n;

    secventa(n);

    cout << n;

    return 0;
}
