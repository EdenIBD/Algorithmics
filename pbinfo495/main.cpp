#include <iostream>
#include <vector>
using namespace std;
bool estePrim(int x){
    if(x<=1) return false;
    for(int d=2; d*d <=x; d++){
        if(x% d == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int>x(n);
    for(int i= 0; i<n;i++){
        cin >> x[i];
    }
    vector<int>y;
    for(int i = n-1; 0<=i;i--){
        if(estePrim(x[i])) cout << x[i] << " ";
        else continue;

    }
    return 0;
}
