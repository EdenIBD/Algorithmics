#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    int
     s = 0;

    cin >> n;

    for(int i = 1; i<=sqrt(n); i++){
        if(n % i == 0) s+= i + n/i;
    }

    cout << s;

    return 0;
}
