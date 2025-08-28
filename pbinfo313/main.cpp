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

    int s_prin = 0, s_sec = 0;

    for(int i = 1; i<=n; i++){
        s_prin += v[i][i];
        s_sec += v[i][n+1-i];
    }

    if(s_prin >= s_sec) cout << s_prin - s_sec;
    else cout << s_sec - s_prin;

    return 0;
}
