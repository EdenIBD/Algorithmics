#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("colzero.in");
ofstream fout("colzero.out");

#define cin fin 
#define cout fout

int main(){
    int m, n, c = 0;
    cin >> m >> n;
    int a[101][101];

    for(int i = 1; i<= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int j = 1; j<=n; j++){
        bool ok = true;
        for(int i = 1; i<=m; i++){
            if(a[i][j] != 0){
                ok = false;
                break;
            }
        }
        if(ok) c++;        
}

    cout << c;

    return 0;
}
