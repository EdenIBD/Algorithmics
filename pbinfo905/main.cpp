#include <iostream>
using namespace std;

void detcifre(int n, int &p, int &u){
    u = n % 10;
    while(n>9) n /=10;

    p =n;
}

int main(){
    int n, p = 0, u = 0;
    cin >> n;

    detcifre(n , p, u);

    cout  << p << " " << u;



}
