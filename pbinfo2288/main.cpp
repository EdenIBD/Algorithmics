#include <iostream>
using namespace std;
int main(){
   	int n, max = 0, ok = 0;

    cin >> n;

    while(n){
        int cif = n%10;
        if(cif % 2 == 1  && cif>=max){
            max = cif;
            ok = 1;
        }

        n /= 10;
    }

    if(ok == 0) cout << "nu exista";
    else cout << max;

    return 0;
}


