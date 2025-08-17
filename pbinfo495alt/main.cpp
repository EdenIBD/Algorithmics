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
    int j = 0;
    for(int i = n-1; 0<=i;i--){
        if(estePrim(x[i])){
            x[i] = y[j];
            j++;
        }
        else continue;
    }
    for(int t = 0; t<j;t++){
        cout << y[t] << " ";
    }
    return 0;
}
