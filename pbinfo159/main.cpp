#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;
    int v[51];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int p = n; p>=1; p--)
        if(v[p] % 2 == 0){
            for(int i=n; i>=p; --i)
                v[i+1] = v[i];
            n++;
            v[p+1] = v[p]*2;
        }

    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";

    return 0;
}
