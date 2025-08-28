#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;
    int v[1001];

    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }

    for(int i = 2; i<=n; i++){
        if(i % 2 == 0)cout << v[i] << " ";
    }
    cout << endl;

    for(int i=n; i>=1; i--){
        if(i % 2 != 0) cout << v[i] << " ";
    }

    return 0;
}
