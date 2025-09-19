#include <iostream>
using namespace std;

int main(){
    int n, i = 1, s = 0;
    cin >> n;

    while(n){
        if(i % 2 == 0) s += n % 10;
        i++;
        n /= 10;
    }

    cout << s; 
    return 0;
}