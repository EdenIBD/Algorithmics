#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x == 2) return true;

    for(int i = 3; i <= x; i+=2){
        if(i != x && x % i == 0) return false;
    }

    return true;
}

int nr_prim(int n){
    for(int i = n; i>=0; i++){
        if(prim(i) == true) return i;
    }
}

int main(){
    int n;

    cin >> n;

    cout << nr_prim(n) << endl;

    if(prim(n) == true) cout << "true";
    else cout << "False";



}
