#include <iostream>

using namespace std;

int main()
{
    int n, s_par = 0, s = 0, nrz = 0, s_div = 0;cin >> n;

    int v[1001];

    for(int i = 1; i<=n; i++){
        cin >> v[i];
        if(v[i] % 2 == 0) s_par += v[i];
        if(i % 2 == 0) s+=v[i];
        if(v[i] % 10 == 0)nrz++;
        if(v[i] % 3 == 0 && i % 2 == 1)s_div += v[i];
    }

    for(int i =  n; i>=1;i--)
        cout << v[i] << " ";

    cout << endl;
    cout << s_par << endl;
    cout << s << endl;
    cout << nrz << endl;
    cout << s_div << endl;

    return 0;
}
