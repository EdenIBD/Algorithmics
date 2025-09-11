#include <iostream>
using namespace std;


int main(){
    int n, m, s;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        s = 0;
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            s += a[i][j];
        }
        cout << s << " ";
    }

    return 0;
}