#include <iostream>
using namespace std;

int main(){
    long long n;
    int s = 0, ogl = 0;

    cin >> n;

    while(n){
        s+=n%10;
        n /=10;
    }

    while(s){
        int cif = s%10;
        ogl = ogl*10 + cif;
        s /=10;
    }

    cout << ogl;

    return 0;
}

