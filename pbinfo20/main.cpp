#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i <= x; i++){
        if(x % i == 0) return false;
    }

    return true;
}



void sum_div_prim(int n, int &s){
    s = 0;
    if(n % 2 == 0){
        s+=2;
        if(prim(n/2) == true) s+=n/2;
    }

    for(int i = 3; i*i <= n; i++){
        if(n % i == 0 && prim(i) == true)s+=i;
        if(n % i == 0 && prim(n/i) == true && i != n/i) s+= n/i;
        }

    if(prim(n) == true) s+=n;

}

int main(){
    int n, s;
    cin >> n;

    sum_div_prim(n, s);

    cout << s;



    }

