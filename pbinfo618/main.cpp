#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int v[1001], a[1001];

    for(int i = 1; i<=n; i++){
        cin >>v[i];
        a[i] = v[i];
    }

    for(int i = 1; i<n; i++)
        for(int j = i + 1; j<=n; j++)
    if(v[i] > v[j]){
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++)
        if(v[i] == a[j]){
            cout << j << " ";
            continue;
        }
    }

    return 0;
}
