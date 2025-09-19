#include <iostream>
using namespace std;

int sumcif(int x){
    int s = 0;
    while(x){
        int cif = x % 10;
        s += cif;
        x /= 10;
    }
    return s;
}

int main(){
    int n, maxx = 0, minn = 10000, nrmax, nrmin;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x; 
        cin >> x;
        if(sumcif(x) > maxx){
            maxx = sumcif(x);
            nrmax = x;
        }

        if(sumcif(x) < minn){
            minn = sumcif(x);
            nrmin = x;
        }
    }

    cout << nrmin << "\n" << nrmax;

    return 0;
}