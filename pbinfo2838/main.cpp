#include <iostream>
using namespace std;
bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;

    for(int i = 3; i*i <= x; i+=2){
        if(x % i == 0)return false;
    }

    return true;
}


int NrPrime(int n){
    int cifp = 0;
    while(n){
        if(prim(n%10) == true)cifp++;
        n /= 10;
    }

    return cifp;
}

int main(){
    cout << NrPrime(1234567);
}
