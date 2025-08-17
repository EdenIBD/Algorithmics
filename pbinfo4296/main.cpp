#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, p;
    long long s = 0;
    cin >> n >> p;

    for(int i = 1; i<=n; i++){
      	long long x;
        cin >> x;

        int nrdiv = 0;

        for(int j = 1; j*j<=x;j++){
            if(x % j == 0) nrdiv++;
            if(x % j == 0 && x/j > sqrt(x)) nrdiv++;
        }
        cout << nrdiv << endl;
        if(nrdiv >= p) s+=x;
    }

    cout << s;

    return 0;
}
