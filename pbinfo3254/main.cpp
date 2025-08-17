#include <iostream>
using namespace std;

int main(){
    int n, maxp = 0, mini = 10;
    cin >> n;

    while(n){
        int cif  = n % 10;
        if(cif % 2 == 0 && cif>= maxp) maxp = cif;

        if(cif % 2 != 0 && cif<=mini) mini = cif;

        n /= 10;
    }

    int p = maxp * mini;
    cout << p;

    return 0;
}
