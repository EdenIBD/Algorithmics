#include <iostream>

using namespace std;

int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }

    return f;
}

int sumfactcif(int n){
    int s = 0;

    if(n == 0) return 1;

    while(n){
        s += fact(n % 10);
        n /= 10;
    }

    return s;

}

int main()
{
    cout << sumfactcif(432);
    return 0;
}
