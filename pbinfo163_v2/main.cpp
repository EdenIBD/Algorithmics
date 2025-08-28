#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;

    for(int i = 3; i*i<=x; i+=2)
        if(x % i == 0) return false;

    return true;

}

int main()
{
    int n; cin >> n;
    int v[1001];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int p = n; p>=1; p--){
        if(prim(v[p]) == true){
            for(int i = p; i<=n-1; i++)
                v[i] = v[i+1];
            n--;
    }
    }

    for(int i = 1;i<=n; i++)
        cout << v[i] << " ";

    return 0;
}

