#include <iostream>
using namespace std;

int main(){
    long long n, maxx = 99;
    cin >> n;
    while(n > 99){
        int x = n % 1000;
        if(x > maxx) maxx = x;

        n /= 10;
    }
    
    cout << maxx;

}