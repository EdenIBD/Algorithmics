#include <iostream>
using namespace std;

int main(){
    int n, m, max = 0;
    bool ok = false;
    cin >> n >> m;
    int a[101][101];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= m; j++){
            int val = a[i][j];
            int c = 0;
            for(int k = 1; k <= n; k++){
                for(int l = 1; l <= m; l++){
                    if(a[k][l] == val){
                        c++;
                    }
                }
            }
            if(c >= 2 && val > max) {
                max = val;
                ok = true;
            }
        }
    }

    if(ok) cout << max;
    else cout << "IMPOSIBIL";
    
    return 0;
}