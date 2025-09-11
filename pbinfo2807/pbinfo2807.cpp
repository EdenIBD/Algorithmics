#include <iostream>
using namespace std;

int main(){
    int n, m;
    int a[51][51];

    cin >> n  >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    int min1 = a[1][1], lin, col, minm = a[1][m], linm, colm;

    for(int j = 1; j < 2; j++){
        for(int i = 1; i <= n; i++){
            if(min1 > a[i][j]){
                min1 = a[i][j];
                lin = i; col = j;
            }
    
        }
    }

    for(int j = m; j < m + 1; j++){
        for(int i = 1; i <= n; i++){
            if(minm > a[i][j]){
                minm = a[i][j];
                linm = i; colm = j;
            }
    
        }

    int aux = a[lin][col];
    a[lin][col] = a[linm][colm];
    a[linm][colm] = aux;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;


        
    }
}