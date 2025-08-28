#include <iostream>
#include <cmath>
using namespace std;
void nr_div_imp(int n, int &nrdiv){
    nrdiv = 0;

    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(i % 2 == 1) nrdiv++;
            if(i != n/i && n/i % 2 == 1)nrdiv++;
        }
    }
}

int main()
{
    int n, nrdiv;
    cin >> n;

    nr_div_imp(n, nrdiv);

    cout << nrdiv;

    return 0;
}
