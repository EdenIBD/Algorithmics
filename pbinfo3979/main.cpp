#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;

    cin >> n;

    while(n){
        int cif = n % 10;

        if(cif>=3 && cif<=7) s+=cif;

        n/=10;
    }

    cout << s;
    return 0;
}
