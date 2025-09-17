#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("interschimbarelinii.in");
ofstream fout("interschimbarelinii.out");

int main(){
    int n, m;
    fin >> n >> m;
    int a[26][26];    
    int maxx = -10000, minn = 10000, linmax, linmin;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            fin >> a[i][j];
            if(a[i][j] > maxx){
                maxx = a[i][j];
                linmax = i;
            }

            if(a[i][j] < minn){
                minn = a[i][j];
                linmin = i;
            }
        }
    }

    for(int j = 1; j <= m; j++)
        swap(a[linmax][j], a[linmin][j]);
    /*{
        int aux = a[linmax][j];
        a[linmax][j] = a[linmin][j];
        a[linmin][j] = aux;
    }*/

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            fout << a[i][j] << " ";
        }
        fout << "\n";
    }

    return 0;
}