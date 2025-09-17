#include <iostream>
using namespace std;
int main(){
    int n, m, c = 0;
    cin >> n >> m;
    int a[1001][1001];

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }

    for(int j = 1; j <= m; j++){
        int minn = 10000;
        for(int i = 1; i <= n; i++){
            if(a[i][j] < minn) minn = a[i][j];
            if(a[i][j] == 0){
                minn = 0;
                break;
            }
        }
        c += minn;
    }

    cout << c;

    return 0;
}