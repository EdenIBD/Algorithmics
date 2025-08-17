#include <iostream>
using namespace std;

int main(){
    int k, nr = 0;

    while(k){
        cin >> k;
        if(k % 2 == 0 && k != 0) nr++;
    }

    cout << nr;

    return 0;
}
