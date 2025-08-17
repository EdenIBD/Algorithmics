#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, p;
    cin >> n >> p;
    vector<int>v(n);
    for(int i = 0; i<n;i++){
        cin >> v[i];
}
    for(int i =0;i<n;i++){
        if(v[i] == v[p]) continue;
        else cout << v[i] << " ";
    }
    return 0;
}
