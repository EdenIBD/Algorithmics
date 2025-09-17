#include <iostream>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;

    int a[101][101];

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }

        for(int j = 1; j <= m; j++){
            for(int step = 1; step < n; step++){
                for(int i = 1; i < n; i++){
                    if(a[i+1][j] > a[i][j]){
                        int aux = a[i+1][j];
                        a[i+1][j] = a[i][j];
                        a[i][j] = aux;
                    }
                }
            }
        }

            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }

    return 0;
}