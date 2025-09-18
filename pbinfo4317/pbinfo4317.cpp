#include <iostream>
using namespace std;

int main(){
    int n, v[11], k = 1, minn = 10, maxx = -1, rez = 0, pmin, pmax;
    cin >> n;
    while(n){
        v[k] = n % 10;
        if(v[k] > maxx){
             maxx = v[k];
             pmax = k;
        }
        if(v[k] < minn){ 
             minn = v[k];
             pmin = k;
        }
        k++;
        n /= 10;
    }

    k--;

    int aux = v[pmin];
    v[pmin] = v[pmax];
    v[pmax] = aux;

    for(int i = k; i >= 1; i--)
        rez = rez*10 + v[i];

    cout << rez;
}