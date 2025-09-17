#include <iostream>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m;
    int a[101][101];

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    
    cin >> x;

    for(int i = 2; i <= n-1; i++){
        for(int j = 2; j <= m-1; j++){
            a[i][j] = x+1;
        }
    }

    bool exista = false;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i][j] == x) exista = true;
        }
    }

    if(exista) cout << "DA";
    else cout << "NU";

    return 0;
}