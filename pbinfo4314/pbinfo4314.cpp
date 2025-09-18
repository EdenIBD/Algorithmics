#include <iostream>
using namespace std;

int main(){
    long long n, c = 0;
    cin >> n;
    int copie = n; 
    while(n > 9) n /= 10;
    while(copie){
        int cif = copie % 10;
        if(cif < n) c++;
        copie /= 10;
    }

    cout << c;
    return 0;
}