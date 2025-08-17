#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool estePrim(int x) {
        if (x <= 1)
        return false;
        for (int d = 2; d * d <= x; d++) {
            if (x % d == 0)
            return false;
        }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    for(int i = n-1;0<=i;i--){
    if(estePrim(v[i])){
       v[i] = 0;
       break;
       }
       else continue;
    }

        for(int i = 0; i<n; i++){
            cout << v[i] << " ";
        }
    return 0;
}
