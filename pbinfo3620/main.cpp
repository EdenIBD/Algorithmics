#include <iostream>
using namespace std;

int main(){
    int n, k, ok = 1;

    cin >> n >> k;

    while(n){
        int cif = n%10;
        if(k<cif) ok = 0;

        n /= 10;
    }

    if(ok == 1) cout << "DA";
    else cout << "NU";

    return 0;
}
