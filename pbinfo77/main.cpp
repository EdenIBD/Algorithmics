#include <iostream>
using namespace std;

int main(){
    long long n;
    int ok = 0;
    cin >> n;

    if(n == 0){
            cout << 0;
            return 0;
        }

    while(n){
        int cif = n%10;
        if(cif % 2 == 0){
            cout << cif;
            ok = 1;
            return 0;
        }

        else n /=10;
    }

    if(ok == 0) cout << -1;


    return 0;
}
