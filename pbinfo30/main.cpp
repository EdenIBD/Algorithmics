#include <iostream>

using namespace std;

void sub(int n, int k){
    for(int i = n; i>=1; i--){
        cout << i * k << " ";
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    sub(n, k);
    return 0;
}
