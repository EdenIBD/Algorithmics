#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sumcolmax.in");
ofstream fout("sumcolmax.out");


int main(){

    int n, m, max = -1001;
    fin >> n >> m;
    int a[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            fin >> a[i][j];
        }
    }

    for(int j = 1; j <= m; j++){
        int s = 0;
        for(int i = 1; i <= n; i++){
            s += a[i][j];
        }
        if(s > max) max = s;
    }

        for(int j = 1; j <= m; j++){
        int s = 0;
        for(int i = 1; i <= n; i++){
            s += a[i][j];
        }
        if(s == max){
            for(int i = 1; i <= n; i++){
                fout << a[i][j] << " ";
            }
            break;
        }
    }

}
