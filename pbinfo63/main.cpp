#include <iostream>
using namespace std;

int main(){
    long long n;
 	int d = 2, expp, maxexp = 0, maxfac = 0;

    cin >> n;

    while(n != 1){
        expp = 0;

        while(n % d == 0){

            n = n/d;
           	expp++;
        }

        if(expp >= maxexp && d > maxfac){
            maxexp = expp;
            maxfac = d;
        }

        d++;

    }

    cout <<  maxfac;

    return 0;
}
