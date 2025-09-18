#include <iostream>
using namespace std;

int main(){
    int n, v[11], k = 1, nrcif = 0;
    long long s = 0;
    cin >> n;
    while(n){
        v[k] = n % 10;
        k++;
        n /= 10;
        nrcif++;
    }
    k--;
    for(int t = 1; t <= nrcif; t++){
        int copie = v[k];
        for(int i = k; i>1; i--)
            v[i] = v[i-1];
        v[1] = copie;

        long long rez = 0;
        for(int p = k; p >= 1; p--)
            rez = rez * 10 + v[p];

        s += rez;
    }

    cout << s;

    return 0;
}