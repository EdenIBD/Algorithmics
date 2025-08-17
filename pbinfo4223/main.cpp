#include <iostream>
using namespace std;

int main(){
    int n, k, s=0, ok = 0;
    cin >> n >> k;

    for(int i = 0; i<n; i++){
        long long x;
        cin >> x;
        int copie = x;
        while(x>=10)x /= 10;
        if(x == k){
            ok = 1;
            while(copie){
                int cif = copie % 10;
                s += cif;
                copie /= 10;
            }
        }
    }

    if(ok == 1)cout << s;
    else cout << -1;

    return 0;
}
