#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, minn = pow(2, 30), v[1001];
    cin >> n;

    for(int i = 1; i<=n; i++){
        cin >> v[i];
        if(v[i] < minn)minn = v[i];
    }

    for(int p = n; p>=1; p--)
        if(v[p] == minn){
            for(int i = n; i>=p; --i)
                v[i+1] = v[i];
            n++;
        }

    for(int i = 1; i<=n; i++)
        cout << v[i];

    return 0;
}
