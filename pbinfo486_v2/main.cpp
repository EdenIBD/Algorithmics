#include <iostream>

using namespace std;

int main()
{
    int n; cin >>n;
    int v[1001];

    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }

    int maxx = 0, minn = 1000001;

    for(int i = 1; i<=n;i++){
        if(v[i] >= maxx) maxx = v[i];
        if(v[i] <= minn) minn = v[i];
    }

    cout << minn << " " << maxx;
    return 0;
}
