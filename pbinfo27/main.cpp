#include <iostream>

using namespace std;

int nr_cif_zero(int n){
    int nr = 0;

    if(n == 0) return 1;

    while(n){
        if(n % 10 == 0) nr++;
        n /= 10;
    }

    return nr;
}

int main()
{
    cout << nr_cif_zero(0);
    return 0;
}
