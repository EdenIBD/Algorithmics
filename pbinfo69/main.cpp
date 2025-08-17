#include <iostream>
using namespace std;

int main(){
    int n,ogl = 0;

    cin >> n;

    while(n){
        int cif = n % 10;
        ogl = ogl*10 + cif;
        n /=10;
    }

    cout << ogl;

   	return 0;
}
