#include <iostream>
using namespace std;

int DivImpar(int a, int b){
    int minn;
    if(a>=b) minn = b;
    else minn = a;

    for(int i = minn-1; i>=1; i--){
        if(a % i == 0 && i % 2 == 1 && b % i == 0) return i;
    }


}
/*
int DivImpar(int a, int b){
    int r;
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }

    if(a % 2 == 1) return a;
    else{
        for(int i = 1; i<a; i++){
            if(a/i % 2 == 1 && a % i == 0) return a/i;
    }
    }

}
*/

int main(){

    int a, b;

    cin >> a >> b;
    cout << DivImpar(a, b);
    }
