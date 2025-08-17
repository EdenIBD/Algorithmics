#include <iostream>

using namespace std;

int sumfactcif(int n){
    int s = 0;

    if(n == 0) return 1;

    while(n){
        int cif = n % 10, f = 1;

        for(int i = 1; i <= cif; i++){
            f *= i;
        }

        s+= f;

        n /= 10;
    }
    return s;
}


int main()
{
    cout << sumfactcif(0);
    return 0;
}
