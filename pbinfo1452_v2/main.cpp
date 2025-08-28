#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    int v[1501];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int i = p; i<=n-1; i++)
        v[i] = v[i+1];
    n--;

    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";
}
