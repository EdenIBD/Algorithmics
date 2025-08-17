#include <iostream>
using namespace std;

int main(){
    int n, i = 0, j = 0;

    cin >> n;

    while(n){
        int cif = n % 10;
        if(cif == 2) i++;
        else if(cif == 3)j++;

        n /= 10;
    }

    if(i >j) cout << 2;
    else if(i == j) cout << "2 3";
    else cout << 3;

    return 0;
}
