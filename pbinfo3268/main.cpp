#include <iostream>
using namespace std;

int main(){
    long long a, b, r;

    cin >> a >> b;

    long long produs = a*b;

    while(b != 0){
        r = a %  b;
        a = b;
        b = r;
    }

    cout << a << " " << produs/a;

    return 0;
}
