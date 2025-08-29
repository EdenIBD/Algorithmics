#include <iostream>
#include <cmath>
using namespace std;

bool pp(int x){
    int r = sqrt(x);
    return r*r == x;
    }

int main()
{
    int n; cin >> n;

    int v[51];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int p =n; p>=1; p--)
        if(pp(v[p]) == true){
            for(int i = n; i>=p; --i)
                v[i+1] = v[i];
            n++;
            v[p] = sqrt(v[p]);
    }

    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";

    return 0;
}
