#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[101][101];

    for(int i = 1; i<=n; i++)
            for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    int v[10201];
    int k = 1;

    for(int i = 1; i<=n; i++){
        for(int j = 1;j<=m;j++){
            int x = a[i][j];
            bool exista = false;

            for(int t = 1; t<=k; t++){
                if(v[t] == x){
                    exista = true;
                    break;
                }
            }

            if(!exista){
                v[k] = x;
                k++;
            }
        }
    }
    int nrmaxx = 0, elemax = 0;

for(int t = 1; t<=k; t++){
        int nr = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m;j++){
            if(a[i][j] == v[t]) nr++;
        }
    }
    if(nr > nrmaxx){
            nrmaxx = nr;
            elemax = v[t];
    }
    if(nr == nrmaxx && v[t]>elemax) elemax = v[t];
}

 cout << elemax;

    return 0;
}
