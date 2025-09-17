#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[101][101], s[101];

    for(int i = 1; i <= n; i++){
        s[i] = 0;
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            s[i] += a[i][j];
        }
    }

   // for(int i = 1; i <= n; i++) cout << s[i] << " ";

    for(int step = 1; step < n; step++){
        for(int i = 1; i < n; i++){
            if(s[i] > s[i+1]){
                int aux = s[i];
                s[i] = s[i+1];
                s[i+1] = aux;

                for(int j = 1; j <= m; j++){
                    aux = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] = aux;
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