#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("interclasare2.in");
    ofstream fout("interclasare2.out");

    int n, m, p = 1, a[100001], b[100001], c[200002];

    fin >> n;
    for(int i = 1; i<=n; i++)
        fin >> a[i];

    fin >> m;
    for(int j = 1; j<=m; j++)
        fin >> b[j];

    int i = 1, j = 1;

    while(i <= n && j <= m)
        if(a[i] < b[j]) i++;
        else if(a[i]>b[j]) j++;
        else{
            c[p++] = a[i++];
            j++;
        }



/*
    while(i <= n)
        c[p++] = a[i++];

    while(j <= m)
        c[p++] = b[j++];
*/
    for(int t = 1; t<=p-1; t++){
        fout << c[t] << " ";
        if(t % 10 == 0 && t != 1) fout << endl;
    }

    return 0;
}
