#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("matrice7.in");
ofstream fout("matrice7.out");
#define cin fin
#define cout fout
int main(){
    int n, m, maxx = 0; cin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] > maxx) maxx = a[i][j];
        }
    }

    for(int j = 1; j <= m; j++){
        int minn = 1000000000;
        for(int i = 1; i <= n; i++){
            if(a[i][j] < minn) minn = a[i][j];
        }
        for(int i = 1; i <= n; i++){
            if(a[i][j] == maxx) a[i][j] = minn;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}