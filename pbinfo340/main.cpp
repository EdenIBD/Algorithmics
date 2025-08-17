#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) cout << 0 << '\n';
    else cout << 1 + ( (n - 1) % 9 ) << '\n';
    return 0;
}
