#include <iostream>
using namespace std;

int main(){
    int n, maxx = 0, c = 0;
    cin >> n;

    int copie = n;
    while(copie){
        int cif = copie % 10;
        if(cif > maxx) maxx = cif;
        copie /= 10;
    }

    while(n){
        int cif = n % 10;
        if(cif == maxx) c++;
        n /= 10;
    }

    cout << maxx << " " << c;
    return 0;
}