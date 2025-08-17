#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int s = 0, d1 = 0, d2 = 0;

    for(int i = 2; i*i <= n && d2 == 0; i++){
        if(n % i == 0){
        	if(d1 == 0){
                d1 = i;
        	}
        	else d2 = i;
        }

    }

    if(d2 == 0){
        d2 = n/d1;
    }

    cout << d1 + d2;


    return 0;
}
