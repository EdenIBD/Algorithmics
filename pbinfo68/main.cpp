#include <iostream>

using namespace std;

int main()
{
    int n, ciframax = 0;

    cin >> n;

    while(n){
        int cif = n%10;
        if(cif > ciframax) ciframax = cif;
        n /=10;
    }

    cout << ciframax;

    return 0;
}
