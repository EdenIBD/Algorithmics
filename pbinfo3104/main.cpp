#include <iostream>
using namespace std;

int Egal(int n){
    while(n){
        int cif = n % 10;
        if(cif % 2 != 0) break;
        n /= 10;
    }

    int cif_imp = n % 10;
    n = n/10;
    while(n){
        int cif = n % 10;
        if(cif % 2 != 0 && cif != cif_imp) return 0;
        n /= 10;
    }

    return 1;
}

int main(){
    cout << Egal(13);



}



