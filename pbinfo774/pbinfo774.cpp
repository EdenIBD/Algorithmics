#include <iostream>
using namespace std;

bool prim(int x){
    if(x < 2) return false;
    if(x % 2 == 0) return x == 2;
    for(int d = 3; d * d <= x; d += 2)
        if(x % d == 0) return false;
    return true;
}

int main(){
    int n, m; cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }

    for(int i = 1; i <= n;i++){
        if(prim(a[i][1]) == true){
            for(int p = i; p < n; p++)
                for(int j = 1; j <= m; j++)
                    a[p][j] = a[p + 1][j];
            n--;
            i--;
        } 
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}