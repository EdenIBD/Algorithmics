#include <iostream>

using namespace std;

int nr_cif(int n, int k){
    int nrcif = 0;
    while(n){
        int cif = n % 10;
        if(cif != 0 && k % cif == 0) nrcif++;

        n /= 10;
    }

    return nrcif;
}

int main()
{

    cout << nr_cif(7203435, 20);
    return 0;
}
