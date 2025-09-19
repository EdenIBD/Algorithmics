#include <iostream>
using namespace std;

int main(){
    int n, n1 = 0, n2 = 0, d, p1 = 1, p2 = 1;
    cin >> n;
    while(n){
        int cif = n % 10;
        if(cif % 2 == 0){
            n1 += cif*p1;
            p1 *= 10;
        }

        if(cif % 2 != 0){
            n2 += cif*p2;
            p2 *= 10;
        }

        n /= 10;
    }

    cout << n1 << " " << n2 << endl;

    if(n1 > n2) d = n1 - n2;
    else d = n2 - n1;

    cout << d;
    return 0;
}