#include <iostream>

using namespace std;

void duplicare(int n, int &d){
    d = 0;
    int ok = 0, p = 1;
    while(n){
        int cif = n % 10;
        if(cif % 2 == 0){
            d = d+ p* cif;
            p *= 10;
            ok = 1;
        }
        d = d + p*cif;
        p *= 10;
        n /= 10;
    }

    if(ok == 0) d = -1;


}

int main()
{
    int n, d;
    cin >> n;

    duplicare(n, d);

    cout << d;
    return 0;
}
