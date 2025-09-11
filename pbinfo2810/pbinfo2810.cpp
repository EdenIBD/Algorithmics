#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[53][53], m[53];

    for(int i = 1; i <=n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    
    for (int j = 1; j <= n; j++) {
        double s = 0;
        for (int i = 1; i <= n; i++) {
            s+= a[i][j];
        }
        m[j] = s/n;
    }

   
    int new_n = n + 1;
    for (int i = n; i >= n / 2 + 1; i--) {
        for (int j = 1; j <= n; j++) {
            a[i + 1][j] = a[i][j];
        }
    }

    
    for (int j = 1; j <= n; j++) { 
            a[n / 2 + 1][j] = m[j];
        
    }

    
    for (int i = 1; i <= new_n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}