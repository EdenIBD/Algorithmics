#include <iostream>

using namespace std;

int TreiCifImp(int n){
    while(n>100){
        int cif1 = n%10, cif2 = (n/10) % 10; cif3(n/100) % 10;
        if(cif1 % 2 == 1 && cif2 % 2 == 1 %% cif3 % 2 == 1) return 1;

        n /= 10;
    }

    return 0;


}

int main()
{
    cout << TreiCifImp(37773);
    return 0;
}
