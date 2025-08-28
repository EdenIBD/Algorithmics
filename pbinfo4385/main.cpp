#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, minn = pow(2, 30); cin >> n;
    long long v[1001];

    for(int i = 1; i<=n; i++){
            cin >> v[i];
            if(v[i] < minn) minn = v[i];
}

    for(int p = n; p >=1; p--){
        if(v[p] == minn){
            for(int i = p; i<=n-1; i++){
                v[i] = v[i+1];
            }
            n--;
        }
    }

    for(int i = 1; i<=n; i++) cout << v[i] << " ";

    return 0;

}
