#include <iostream>
using namespace std;

void oglindit(int n, int &ogl){
    ogl = 0;
    while(n){
        int cif = n % 10;
        ogl = ogl*10 + cif;

        n /= 10;
    }
}

int main(){
    int n, ogl;
    cin >> n;

    oglindit(n, ogl);

    cout << ogl;
    }

