#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    int a[101][101], v[1001];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    cin >> k;

    for(int t = 1; t <= k; t++){
        cin >> v[t];
        bool exista = false;
        int c = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == v[t]){
                    c++;
                    break;
                } 
            }
        }
        if(c == n) cout << "DA" << endl;
        else cout << "NU" << endl;
    }

    return 0;
}