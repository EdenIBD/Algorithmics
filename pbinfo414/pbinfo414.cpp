#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

int a[101][101];
int main(){
    int n, x1, x2;
    fin >> n;
    while(fin >> x1 >> x2){
        a[x1][x2] = 1;
        a[x2][x1] = 1;
    }

    for(int i = 1; i <= n; i++){
        int c = 0;
        for(int j = 1; j <= n; j++)
            if(a[i][j] == 1) c++;
        fout << c << " ";
        for(int j = 1; j <= n; j++)
            if(a[i][j] == 1) fout << j << " ";
        fout << endl;
    }
    
    return 0;

}