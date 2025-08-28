#include <iostream>
using namespace std;

int cifreImpare(int n){
    int p = 1, rez = 0, copie = n;
    bool ok = false;
    while(n){
        int cif = n % 10;
        if(cif % 2 == 0){
            rez = rez + cif*p;
            ok = true;
            p *= 10;
            }

        n /= 10;
    }
    if(copie == rez) return -1;
    else if(ok == false) return -1;
    else return rez;
}

int main(){
    int n;
    cin >> n;
    cout << cifreImpare(n);


}
