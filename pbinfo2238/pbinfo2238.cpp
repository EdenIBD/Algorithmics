#include <iostream>
using namespace std;

int main(){
    int n, r, c = 0;
    cin  >> n >> r;
    
    while(n){
        long long t, s = 0;
        cin >> t; 

        if(t % 9 == r) c++;
        n--;
    }

    cout << c;
}