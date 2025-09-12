#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("exista.in");
ofstream fout("exista.out");

int main(){
    int n, m, k, s = 0;
    bool ok = false;
    fin >> k >> n >> m;
    int a[101][101];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            fin >> a[i][j];

        }
    }

    for(int j = 1; j <= m; j++){
        for(int i = 1; i <= n; i++){
            if(a[i][j] == k){
                s+=j;
                ok = true;
                break;
            }
        }
    }
    if(ok == false) fout << "NU EXISTA";
    else fout << s;
    
    return 0;
}