#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("prodmax.in");
ofstream fout("prodmax.out");
#define cin fin
#define cout fout

int main(){
    int m, n, maxnr = -1;
    cin >> m >> n;
    int a[101][101], v[101], k = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    for(int j = 1; j <= n; j++){
        int nr = 0;
        bool existazero = false;
        for(int i = 1; i <= m; i++){
            if(a[i][j] == 0){
                existazero = true;
            }
            if(a[i][j] == 2) nr++;
        }
        if(!existazero){
        if(nr > maxnr){
            maxnr = nr;
        }
    } else {
        nr = 0;
        if(nr > maxnr)
            maxnr = nr;
    }
}


    for(int j = 1; j <= n; j++){
        int nr = 0;
        bool existazero = false;
        for(int i = 1; i <= m; i++){
            if(a[i][j] == 0){
                existazero = true;
            }
            if(a[i][j] == 2) nr++;
        }
        if(!existazero){    
        if(nr == maxnr)
            v[k++] = j;
        } else {
            nr = 0;
            if(nr == maxnr)
                v[k++] = j;
        }
    }

    for(int i = 0; i < k-1; i++){
        if(v[i] > v[i+1]){
            int aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            i = -1;
        }
    }

    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }

    return 0;

}