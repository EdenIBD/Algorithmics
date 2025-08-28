#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;
    int v[101][101];
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin >> v[i][j];
        }
    }

    int s = 0;

    for(int i = 1;i<=n-1;i++) s+=v[i][i+1]+v[i+1][i];

    cout << s;

    return 0;
    }

