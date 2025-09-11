#include <iostream>
using namespace std;

int main(){
    int n, m, elem = 0; cin >> n >> m;
    int a[101][101], p[101];

    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int j = 1; j <= m; j++){
        for(int i = 1; i <= n; i++){
            if(a[i][j] == 0){
                p[elem] = j;
                elem++;
                break;
            }
        }
    }
            

    for(int t = elem - 1; t >= 0; t--){
        for(int j = p[t]; j<= m; j++){
            for(int i = 1; i <= n; i++){
                a[i][j] = a[i][j + 1];
            }
        }
        m--;
                
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}