#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int v[1001], a[1001];
    bool ok = false;

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int i = 1;i<n; i++)
        for(int j = i + 1; j<=n; j++)
    if(v[i] > v[j]){
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }

    int p = 1;

    for(int i = n; i>=1; i--){
        if(v[i] % 10 == 0){
            a[p] = v[i];
            ok = true;
            p++;
        }
    }

    if(ok == true)
        for(int i = 1; i<p; i++)
            cout << a[i] << " ";
    else cout << "NU EXISTA";

    return 0;
}
