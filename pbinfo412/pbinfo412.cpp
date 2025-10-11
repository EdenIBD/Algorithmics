#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");
int a[101][101];
int main(){
    int n, m; 
    fin >> n >> m;
    for(int t = 1; t <= m; t++){
        int x1, x2;
        fin >> x1 >> x2;
        a[x1][x2] = 1;
        a[x2][x1] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            fout << a[i][j] << " ";
        fout << endl;
    }

    return 0;
}