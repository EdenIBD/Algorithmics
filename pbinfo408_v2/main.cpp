#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n, ogl = 0;
    int d = 0;

    cin >> n;

    while(n){
        int cif = n % 10;
        ogl = ogl*10+ cif;
        n /= 10;
    }

    for(int i = 1; i*i <= ogl; i++){
        if(ogl % i == 0 && i != sqrt(ogl)) d=d+2;
        else if(i == sqrt(ogl)) d++;
    }

    cout << d;

    return 0;
}
