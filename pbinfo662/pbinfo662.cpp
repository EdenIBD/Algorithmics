#include <iostream>
using namespace std;
int main(){
    int n, m, max = 0;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        int s = 0;
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] % 2 == 0) s +=a[i][j];
        }
        if(s > max) max = s;
    }

    for(int i = 1; i <= n; i++){
        int s = 0;
        for(int j = 1; j <= m; j++){
            if(a[i][j] % 2 == 0) s +=a[i][j];
        }
        if(s == max){
            cout << i << " ";
            break;
        }
    }

    return 0;
}