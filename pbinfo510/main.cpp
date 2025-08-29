#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i<=x; i+=2){
        if(x % i == 0) return false;
    }

    return true;

}

int main()
{
    int n; cin >> n;
    long long v[1001], a[1001];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int i = 1; i<n; i++)
        for(int j = i + 1; j<=n; j++)
            if(v[i] > v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    int p = 1;
    for(int i = 1;i<=n;i++)
        if(prim(v[i]) == true){
            a[p] = v[i];
            cout << a[p] << " ";
            p++;
        }



    return 0;
}
