#include <iostream>
using namespace std;

bool prim(int x){
    if(x<2) return false;
    if(x % 2 == 0) return x == 2;
    for(int d = 3; d * d <= x; d += 2)
        if(x % d == 0) return false;

    return true;
}

int main(){
    int n, m,  C = 0;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 2; i<=n; i+=2){
        for(int j = 1; j <= m; j++){
            if(prim(a[i][j])){
                C++;
            }
        }
    }

    cout <<  C;

    return 0;
}
