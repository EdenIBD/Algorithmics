#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("mincols.in");
ofstream fout("mincols.out");

int main(){
    int n; 
    fin >> n;

    int a[101][101];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            fin >> a[i][j];
        }
    }

    for(int j = 1; j <= n; j++){
        int min = 10000;
        for(int i = 1; i <= n; i++){
            if(a[i][j] < min) min = a[i][j];
        }
        fout << min << " ";
    }

    return 0;
}