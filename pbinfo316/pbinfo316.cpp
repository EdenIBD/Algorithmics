#include <iostream>
using namespace std;
int main(){
    int n, m, minn = 10000; cin >> n >> m;
    int a[21][21];
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] < minn) minn = a[i][j];
        }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == minn){
                for(int k = 1; k <= n; k++)
                    a[k][j] = minn;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;


}