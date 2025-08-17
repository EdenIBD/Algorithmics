#include <iostream>

using namespace std;

int main()
{
    long long num1 = 0, num2 = 0;
    int n, m;

    cin >> n >> m;

    for(int i = 1; i<=n; i++){
        if(i % m == 0) num2 += i;
        else num1 += i;
    }
    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num1 - num2;


    return 0;
}
