#include <iostream>
using namespace std;

int main(){
    int n, m, maxx = 0; cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        int c = 0;
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] % 2 == 0) c++;
        }
        if(c > maxx) maxx = c;
    }
    
    for(int i = 1; i <= n; i++){
        int c = 0;
        for(int j = 1; j <= m; j++){
            if(a[i][j] % 2 == 0) c++;
        }
        if(c == maxx){
                cout << i << " ";
        }
    }

    return 0;
}