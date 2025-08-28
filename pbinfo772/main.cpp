#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[101][101];

    for(int i = 1; i<=n; i++){
            for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            }
    }

    int v[10201], elem[10201];
    int k = 0;

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
                v[++k] = x;
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
    int k2 = 0;
 for(int t = 1; t<=k; t++){
        int nr = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m;j++){
            if(a[i][j] == v[t]) nr++;
        }
    }
    if(nr == nrmaxx){
            elem[++k2] = v[t];

    }
}



    for(int i = 1; i<=k2-1;i++){
        for(int j = 1; j<=k2; j++){
            if(elem[i] > elem[j]){
              int aux= elem[i];
              elem[i] = elem[j];
              elem[j] = aux;

            }
        }
    }

    for(int t = 1; t<=k2; t++){
        cout << elem[t] << " ";
    }

    return 0;
}
