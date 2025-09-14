#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("maxmat.in");
ofstream fout ("maxmat.out");

#define cin fin
#define cout fout

int main(){
    int n , m;
    cin >> n >> m;
    int a[26][26], vmax[26], vpoz[26], k = 1;

    for(int i = 1; i<=n; i++){
        int maxx = -1001, poz;
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
            if(a[i][j] > maxx){
                maxx = a[i][j];
                poz = j;
            } 
        }
        vmax[k] = maxx;
        vpoz[k] = poz;
        k++;
    }

    for(int i = 1; i<k; i++)
            cout << vmax[i] << " " << vpoz[i] << endl;

    return 0;
}