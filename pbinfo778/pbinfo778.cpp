#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[101][101], v[101*101], k = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int j = 1; j <= m; j++){
        v[k++] = a[1][j];
        v[k++] = a[n][j];
    }

    for(int i = 2; i < n; i++){
        v[k++] = a[i][1];
        v[k++] = a[i][m];
    }

    for(int i = 1; i <= k; i++){
        int val = v[i];
        for(int j = i+1; j <= k; j++){
            if(v[j] == val){
                for(int p = j; p < k; p++){
                    v[p] = v[p+1];
                }
                k--;
            }
        }
    }

    for(int i = 1; i < k; i++){
        if(v[i] > v[i+1]){
            int aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            i = 0;
        }
    }

    for(int i = 2; i <= k; i++){
        cout << v[i] << " ";
    }

    return 0;
}