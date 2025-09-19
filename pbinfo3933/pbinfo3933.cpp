#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool exista0 = false, exista1 = false, exista_alt = false;

    while(n){
        int cif = n % 10;
        if(cif == 0) exista0 = true;
        if(cif == 1) exista1 = true;
        if(cif != 0 && cif != 1) exista_alt = true;

        n  /= 10;
    }

    if(exista0 == false || exista1 == false || exista_alt == true)
        cout << "nu";
        else cout << "da";

    return 0;
}