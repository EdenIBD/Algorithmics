#include <iostream>
using namespace std;

int main(){

    long long n, d = 2, maxexp = 0, maxx = 0, expp = 0;
    cin >> n;

    while(n != 1){
        expp = 0;

        while(n % d == 0){
            n = n / d;
            expp++;
        }

        if(expp >= maxexp){
            maxexp = expp;
            maxx = d;
        }

        d++;

        if(n != 1 && d * d > n){
            d = n;
        }
    }

    cout << maxx;

    return 0;

}
