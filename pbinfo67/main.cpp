#include <iostream>

using namespace std;
bool prim(long long x){
    if(x <= 1) return false;
    if(x % 2 == 0)return x==2;
    for(long long i = 3; i*i <= x; i+=2){
        if(x % i == 0) return false;
    }

    return true;

}
int a_prim(long long n){
    for(long long i = 1;i*i<=n;i++){
        if(prim(i) == true && prim(n/i) == true && i != n/i && n % i == 0)return 1;
    }

    return 0;

}

int main(){

    long long n;
    cin >> n;

    cout << a_prim(n);
    return 0;
}
