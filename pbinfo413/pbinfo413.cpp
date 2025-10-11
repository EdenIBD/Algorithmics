#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");

int a[101][101];
int main(){
    int n = 0, x1, x2;
    while(fin >> x1 >> x2){
        a[x1][x2] = 1;
        a[x2][x1] = 1;
        if(x1 > n) n = x1;
        if(x2 > n) n = x2;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            fout << a[i][j] << " ";
        fout << endl;
    }

    return 0;
}