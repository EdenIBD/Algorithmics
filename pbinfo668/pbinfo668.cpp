#include <iostream>
using namespace std;

int main(){
    int n, m, c = 0;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i < n; i++){
        bool ok = true;
        for(int j = 1; j<=m; j++){
            if(a[i][j] != a[i+1][j]){
                ok = false;
                break;
            }
        }
        if(ok == true) c++;
    }

    cout << c;
    return 0;
}