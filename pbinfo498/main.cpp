#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }

    return a;

}

int main()
{
    int n, nr = 0; cin >> n;
    int v[201];
    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int i = 1; i<n; i++)
        for(int j = i+1; j<=n; j++)
            if(cmmdc(v[i], v[j]) == 1) nr++;

    cout << nr;

    return 0;
}
