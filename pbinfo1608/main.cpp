#include <iostream>
#include <fstream>
using namespace std;

int nrdiv(int x){
    int nrd = 0;

    for(int i = 1; i*i <= x; i++){
            if(x % i == 0){
                nrd++;
                if(i != x/i)nrd++;
            }
    }

    return nrd;


}
int main()
{
    ifstream fin("sortare_divizori.in");
    ofstream fout("sortare_divizori.out");

    int n; fin >> n;
    int v[1001],d[1001];

    for(int i = 1; i<=n; i++){
        fin >> v[i];
        d[i] = nrdiv(v[i]);
    }


    for(int i = 1; i<n; i++)
        for(int j = i+1; j<=n; j++){
    if((d[i] > d[j]) ||
       (d[i] == d[j] && v[i] < v[j])){
        int aux = v[i], aux2 = d[i];
        v[i] = v[j]; d[i] = d[j];
        v[j] = aux; d[j] = aux2;

    }

        }


    for(int i = n; i>=1; i--)
        fout << v[i] << " ";

    return 0;
}
