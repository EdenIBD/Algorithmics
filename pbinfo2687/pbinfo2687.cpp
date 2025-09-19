#include <iostream>
using namespace std;

int primacif(int x){
    while(x >= 10){
        x /= 10;
    }
    return x;
}

int main(){
    int n, v[1001];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    for(int i = 1; i < n; i++)
        if(v[i] % 10 == primacif(v[i+1]))
            cout << v[i] << " " << v[i+1] << endl;

    return 0;
}
    