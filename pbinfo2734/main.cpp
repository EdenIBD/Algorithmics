#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int v[1001];

    for(int i = 1; i<=n; i++)
        cin >> v[i];

    for(int i = 1; i<=n;i++){
            int j = i + 1;
        while(j<=n){
            if(v[j] == v[i]){
                for(int p = j; p<=n-1;p++)
                    v[p] = v[p+1];
                n--;
            }
            else j++;

            }
        }

    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";

    return 0;
}
