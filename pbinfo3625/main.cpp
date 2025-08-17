#include <iostream>
using namespace std;
int main(){
    int n, a = 0, b = 0, c = 0, d = 0, e = 1, f, copie;

    cin >> n;

    copie = n;

    while(n){
        int cif = n % 10;
        a += cif * cif;
        if(cif % 2 != 0) b += cif;
        if(cif % 3 == 0) c += cif;
        if(cif > 5) d++;
        if(cif != 0)e*=cif;
        n = n/10;
    }

    f = copie%10;

    while(copie >=10) copie /=10;

    f+=copie;

    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " ";

    return 0;



    }
