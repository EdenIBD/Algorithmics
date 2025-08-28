#include <iostream>

using namespace std;

int main()
{
    int n, s = 0; cin >> n;
    int v[1001];
    for(int i = 1; i<=n;i++){
        cin >> v[i];
        s += v[i];
    }

    double ma = s/n;

    int c = 0;
    for(int i = 1; i<=n;i++){
        if(v[i] > ma) c++;
    }

    cout << c;

    return 0;
}
