#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long v[205];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int p = n; p>=2; p--)
        if((v[p] % 2 + 2) % 2 == (v[p-1] % 2 + 2) % 2){
            for(int i = n; i>=p; --i)
                v[i+1] = v[i];
            n++;
            v[p] = (v[p] + v[p-1]) / 2;
    }

    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";

    return 0;
}
