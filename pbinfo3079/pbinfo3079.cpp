#include <iostream>
using namespace std;

int main(){
    int a, b, c = 0, p = 1;
    cin >> a >> b;
    while(a != 0 && b != 0){
        int cifa = a % 10, cifb = b % 10;
        c += (cifa + cifb)/2 * p;
        p *= 10;
        
        a /= 10;
        b /= 10;
    }

    cout << c;
    return 0;
}