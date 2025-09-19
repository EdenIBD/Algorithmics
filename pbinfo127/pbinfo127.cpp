#include <iostream>
using namespace std;

int primacif(int x){
    while(x>9) x/= 10;
    return x;
}

int main(){
    int n, s = 0; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        s += primacif(x);
    }

    cout << s;
    return 0;
}