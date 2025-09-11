#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    bool exista = false;
    int a[51][51];

    for(int i = 1; i<=n;i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int j = 1; j <= m; j++){
        bool ok = true;
        int val;
        for(int i = 1; i <= n; i++){
           val  = a[i][j];
              for(int k = 1; k <= n; k++){
                if(a[k][j] != val){
                     ok = false;
                     break;
                }
              } 
        }
        if(ok == true){ 
                cout << val << " ";
                exista = true;
              }
    }

    if(exista == false) cout << "nu exista";

    return 0;
}