#include <iostream>
using namespace std;

int main(){
    long long n, s= 0;

    cin >> n;

    long long clona = n;

    while(n){
        s+=n%10;
        n /= 10;
    }

    int i = 0;

    while(s){
        s /= 10;
        i++;
    }

    if(clona == 0)cout << 1;
    else cout << i;

    return 0;
}
