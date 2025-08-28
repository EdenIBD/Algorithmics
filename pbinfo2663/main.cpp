#include <iostream>
#include <cmath>
using namespace std;

int NrDiv(int n){

    int nrdiv = 0;
    for(int i = 1; i<=n; i++){
        if(n % i == 0) nrdiv++;
    }

    return nrdiv;

}

int NextNrDiv(int n){
    int nrdiv = NrDiv(n);

    for(int i=n+1;i<= n*n i++){
        int nrdiv2 = NrDiv(i);

    }
    if(nrdiv2 == nrdiv) return i;
    }
}

int PrevNrDiv(int n){
    int nrdiv = NrDiv(n);

    for(int i = n-1; 0<i; i--){
        int nrdiv2 = 0;
        for(int j = 1; j*j <=i; j++){
            if(i % j == 0){
                nrdiv2++;
                if(j != i/j) nrdiv2++;
            }

        }
        if(nrdiv2 == nrdiv) return i;
    }

    return -1;
}
