#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("maxminmatrice.in");
ofstream fout("maxminmatrice.out");

int main(){
    int m, n, maxx = 0;
    fin >> m >> n;
    int a[24][24];
    for(int i = 1; i <= m; i++){
        int minn = 10000;
        for(int j = 1; j <= n; j++){
            fin >> a[i][j];
            if(a[i][j] < minn) minn = a[i][j];
        }
        if(minn > maxx) maxx = minn;
    }

    fout << maxx;
    return 0;
}