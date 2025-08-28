#include <iostream>

using namespace std;

int main(){
    int n;cin >> n;

    int v[21][21];

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            cin >> v[i][j];
        }
    }

    int maxx = 0;

    for(int i = 1; i<=n; i++){
        for(int j = 1;j<=n;j++){
        if(v[i][i]*v[j][n+1-j] >= maxx)
                maxx = v[i][i] * v[j][n+1 -j];
        }
    }

    cout << maxx;


    return 0;
}
