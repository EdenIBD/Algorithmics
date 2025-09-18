#include <iostream>
using namespace std;

int main(){
    long long n, c = 0;
    cin >> n;
    long long copie = n;
    if(n == 0){
        cout << 1;
        return 0;
    } 
    while(n > 9) n /= 10;
    while(copie){
        long long cif = copie % 10;
        if(cif == (long long)(n)) c++;
        copie /= 10;
    }

    cout << c;
    return 0;
}