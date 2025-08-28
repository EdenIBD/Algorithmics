#include <iostream>
using namespace std;

int suma(int a, int b){
    int s = 0, minn;
    if(a >= b) minn = b;
    else minn = a;
    for(int i = 1; i<=minn; i++){
        if(a % i == 0 && b % i == 0) s+=i;
    }

    return s;
}

int main(){

    cout << suma(20, 12);
}
