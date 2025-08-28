#include <iostream>

using namespace std;

int Fulg(int n){
    int nrcif = 0, cif1 = 0, cif2 = 0, cif3 = 0, cif4 = 0;
    while(n){
        int cif = n % 10;
        if(cif<1 || cif>4) return 0;
        else if(cif == 1)cif1 = 1;
        else if(cif == 2)cif2 = 1;
        else if(cif == 3)cif3 = 1;
        else if(cif == 4)cif4 = 1;

        nrcif++;

        n /= 10;
    }

    if(cif1 != 1 || cif2 != 1 || cif3 != 1 || cif4 != 1 || nrcif != 9) return 0;

    return 1;



}

int main()
{
    int n;
    cin >> n;

    cout << Fulg(n);
    return 0;
}
