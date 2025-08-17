#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;

    int rez = 0, p = 1, i = 0;

    cin >> n;

    long long clona = n;

    while(clona){
        i++;
        clona /= 10;
    }

    while(n > pow(10, i/2 + 1)){
        int cif = n % 10;
        rez = rez + cif*p;
        p *=10;
        n /=10;
    }

    cout << rez << " " << n << endl;
    cout <<  n/10 << " n/10" << endl;
    cout << (n/10) * pow(10, i/2) << " (n/10) * pow(10, i/2)" << endl;
    long long final =( (n/10) * (long long)((pow(10, i/2)) + 0.5) ) + rez;

    cout << final;

    return 0;
}


