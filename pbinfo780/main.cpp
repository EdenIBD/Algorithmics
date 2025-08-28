#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    int r;
    while(b != 0){
        r = a%b;
        a = b;
        b = r;
    }

    return a;

}

int main(){
    int n;cin >> n;

    int v[21][21];

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            cin >> v[i][j];
        }
    }
    int s_sub = 0, s_dsrp = 0;
    for(int i=2; i<=n; i++)
        for(int j = 1; j<i;j++) s_sub+=v[i][j];

    for(int i = 1; i<n; i++)
        for(int j = i+1;j<=n;j++) s_dsrp += v[i][j];

    cout << cmmdc(s_sub, s_dsrp);

    return 0;
    }
