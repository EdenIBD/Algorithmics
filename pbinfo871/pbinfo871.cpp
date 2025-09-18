#include <iostream>
using namespace std;

int main(){
    int n, c1, c2, rez = 0, v[11], k = 1;
    cin >> n >> c1 >> c2;
    if(n == 0 && c1 == 0){
        cout << c2;
        return 0;
    }
    while(n){
        v[k] = n % 10;
        if(v[k] == c1) v[k] = c2;
        n /= 10;
        k++;
    }
    k--;

    for(int i = k; i >= 1; i--)
      rez = rez*10 + v[i];
      
      cout << rez;
      return 0;
}