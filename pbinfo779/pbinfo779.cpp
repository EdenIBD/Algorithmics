#include <iostream>
using namespace std;

int main(){
    int n, m, c = 0;
    cin >> n >> m;
    int a[103][103];

    for(int i = 0; i<=n+1; i++)
        for(int j = 0; j<=m+1; j++)
            a[i][j] = 2;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j-1] % 2 == 0 && a[i][j+1] % 2 == 0 && a[i-1][j] % 2 == 0 && a[i+1][j] % 2 == 0)c++;
        }
    }

    cout << c;
    return 0;
}