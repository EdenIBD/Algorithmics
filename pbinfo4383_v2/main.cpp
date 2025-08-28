#include <iostream>

using namespace std;
bool prim(int x){
    if(x<=1) return false;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i <= x; i++){
        if(x % i == 0) return false;
    }

    return true;

}
int main()
{
    int n;cin >> n;

    int v[1001];

    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }

    for(int i = n; i>=1; i--){
        if(prim(v[i]) == true){
            v[i] = 0;
            break;
        }
    }

    for(int i = 1; i<=n; i++){
        cout << v[i] << " ";
    }

    return 0;

}
