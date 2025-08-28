#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int v[41] = {1, 1};

    for(int i = 0; i<n;i++){
        if(i>1)v[i] = v[i-1] + v[i-2];
        cout << v[i] << " ";
    }

    return 0;
}
