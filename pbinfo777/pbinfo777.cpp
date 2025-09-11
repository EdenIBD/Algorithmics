#include <iostream>
using namespace std;

int main(){
    int n, m, c = 0;
    cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int j = 1; j <= m; j++){
        bool ok = true;
        for(int i = 1; i <= n; i++){
            int val = a[i][j];
            for(int t = i + 1; t <= n; t++){
                if(a[t][j] == val){
                    ok = false;
                    break;
                }
                if(ok == false) break;
            }
            
        }
        if(ok == true) c++;
    }    

    cout << c;

    return 0;
}
