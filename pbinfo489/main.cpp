#include <iostream>

using namespace std;

int main()
{
    int n; cin >>n;
    int v[1001];

    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }

    int nr = 0;
    if(n % 2 != 0){
    for(int i = 1; i<=n/2+1; i++){
        if(i != n/2 + 1) cout << v[i] << " " << v[n-i+1] << " ";
        else cout << v[i];
    }
    }

    else{
    for(int i = 1; i<=n/2; i++){
        cout << v[i] << " " << v[n-i+1] << " ";
    }
}

    return 0;
}
