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

    for(int i = 1; i<=n; i++){
        int copie = a[i][1];
        for(int j = 1; j<m; j++){
                int aux = a[i][j];
                a[i][j] = a[i][j+1];
                a[i][j+1] = aux;
        }
        a[i][m] =  copie;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}