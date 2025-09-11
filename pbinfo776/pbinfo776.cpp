#include <iostream>
using namespace std;

int main(){
    int n, m, C = 0;
    cin >> n >> m;
    int a[101][101];

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n;i++){
        bool ok = true;
        int val = a[i][1];
        for(int j = 1; j <= m; j++){
            if(a[i][j] != val){
                ok = false;
                break;
            }

        }
        if(ok == true) C++;
    }

    cout << C;

    return 0;
}