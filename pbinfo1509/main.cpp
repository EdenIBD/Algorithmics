#include <iostream>

using namespace std;

int nrmaxim(int n){
    int k = 1, p = 1, maxx = 0, cn = n;
    while(cn>9){
        k++;
        p *= 10;
        cn /= 10;
    }

    for(int i = 1; i<=k; i++){
        int permutare = n % p * 10 + n/p;
        if(permutare > maxx) maxx = permutare;
        n = permutare;
    }

    return maxx;

}

int main()
{
    cout << nrmaxim(4273);
    return 0;
}
