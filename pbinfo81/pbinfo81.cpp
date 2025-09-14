#include <iostream>
using namespace std;

int main(){
    int n, c = 0; 
    cin >> n;
    int a[23][23];

    for(int i = 0; i <= n + 1; i++)
        for(int j = 0; j <= n + 1; j++)
            a[i][j] = -100000;
    
    for(int i = 1; i<=n; i++)
        for(int j = 1; j <=n; j++)
            cin >> a[i][j];

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
                c++;

    cout << c;
    return 0;
}