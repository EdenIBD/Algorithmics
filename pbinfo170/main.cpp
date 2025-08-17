#include <iostream>

using namespace std;

int main(){
    long long n;
  	cin >> n;

    int maxim = 0, minim = 10;

    if(n == 0){
        cout << 0;
        return 0;
    }

    while(n){
        int cif = n % 10;
        if(cif >= maxim) maxim = cif;
        if(cif <= minim) minim = cif;

        n /= 10;
    }

    cout << maxim+minim;

    return 0;
}
