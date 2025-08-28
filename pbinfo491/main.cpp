#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;

    int v[1001];

    for(int i = 1;i<=n; i++){
        cin >> v[i];
    }

    int s = 0, x, y, ok = 0;
    for(int i = 1;i<=n;i++){
        if(v[i] % 2 == 0){
            x = i;
            ok = 1;
            break;
        }
    }

    if(ok == 0){
        cout << "NU EXISTA";

        return 0;
    }

    for(int i = n;i>=1;i--){
        if(v[i] % 2 == 0){
            y = i;
            break;
        }
    }

    for(int i = x; i<=y;i++){
        s += v[i];
    }

    cout << s;
}
