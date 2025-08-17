#include <iostream>

using namespace std;

void sum(int n, int &s){
    s = 0;
    while(n){
        s += n % 10; n /= 10;
    }
}

int main()
{
    int n, s;

    cin >> n;

    sum(n,s);

    cout << s;

    return 0;
}
