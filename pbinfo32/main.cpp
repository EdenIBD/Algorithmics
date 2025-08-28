#include <iostream>

using namespace std;

int P(int &n, int c){
    int p = 1, rez = 0;

    while(n){
        int cif = n % 10;
        if(cif != c){
            rez += cif*p;
            p*=10;
        }
        n /= 10;
    }

    n = rez;
    return n;



}



int main()
{
    int n, c;
    cin >> n >> c;

    cout << P(n, c);

    return 0;
}
