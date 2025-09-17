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

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<m; j++){
            if(a[i][j] > a[i][j+1]){
                int aux = a[i][j];
                a[i][j] = a[i][j+1];
                a[i][j+1] = aux;
            }
        }

        for(int i = 1; i <= n; i++){
            for(int step = 1; step < m; step++){
                for(int j = 1; j < m; j++){
                    if(a[i][j] > a[i][j+1]){
                        int aux = a[i][j];
                        a[i][j] = a[i][j+1];
                        a[i][j+1] = aux;
                    }
                }
            }
            for(int j = 1; j <= m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}