#include <iostream>
#include <vector>
using namespace std;
bool estePrim(int x){
    if(x<=1) return false;
    for (int d = 2; d*d <= x; d++){
        if(x % d == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        if(estePrim(v[i])) continue;
           else cout << v[i] << " ";
           }
           return 0;
           }

