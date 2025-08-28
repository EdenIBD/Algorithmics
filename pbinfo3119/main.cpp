#include <iostream>

using namespace std;
int Impare(int &n){
    int rez = 0, p = 1;
    while(n){
        int cif = n % 10;

        if(cif % 2 == 1)rez += (cif-1)*p;
        else rez += cif*p;

        p *= 10;

        n /= 10;
    }

    n = rez;
    return n;
}
int main()
{
    int n;
    cin >> n;

    cout <<  Impare(n);
    return 0;
}
