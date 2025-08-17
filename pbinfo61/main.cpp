#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a, b, m, n;
    cin >> a >> b;

    if(a>=b){
        m = a;
        n = b;
    }
    else {
        m = b;
        n = a;
    }

    for(int i = 1; i*i<=m; i++){
        if(a % i == 0 && b % i == 0) cout << i << " ";
    }
    for(int i = sqrt(m); i>0; i--){
        if(a % (n/i) == 0 && b % (n/i) == 0 && n/i > sqrt(m)) cout << n/i << " ";
    }

    return 0;
}
