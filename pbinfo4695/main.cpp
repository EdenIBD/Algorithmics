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


    for(int i = 1; i<=n; i++){
        if(v[i][i] >= v[i][n+1-i]) cout << v[i][i] << endl;
        else cout << v[i][n+1-i] << endl;
    }


    return 0;
}
