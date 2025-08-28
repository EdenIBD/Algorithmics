#include <iostream>
#include <cmath>
using namespace std;

void prefix(int n, int k, int &x){
    x = 0;

    while(n>pow(10, k)){
        n /= 10;
    }

    x = n;
}

int main()
{
    int x;
    prefix(2714, 3, x);
    cout << x;
    return 0;
}
