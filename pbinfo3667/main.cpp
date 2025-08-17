#include <iostream>
using namespace std;

int main(){
    int n, nr = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        int maxn = 0;
        while(x){
            int cif = x % 10;
            if(cif >= maxn) maxn = cif;
            x /= 10;
        }
        if(maxn % 2 != 0) nr++;

        }

    cout << nr;

    return 0;
}
