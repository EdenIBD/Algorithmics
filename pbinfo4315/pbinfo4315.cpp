#include <iostream>
using namespace std;

int main(){
    long long n, c = 0;
    cin >> n;
    int copie = n; 
    while(n > 99) n /= 10;
    int cif2 = n % 10;
    while(copie){
        int cif = copie % 10;
        if(cif > cif2) c++;
        copie /= 10;
    }

    cout << c;
    return 0;
}