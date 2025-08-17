#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i = 0;i <n; i++){
        for(int j=0; j<n;j++){
        cin >> mat[i][j];
        }
    }
    for(int j=0; j<n; j++){
        cout << mat[0][j] << " ";
    }
    for(int i=1; i<n; i++){
        cout << mat[i][n-1] << " ";
    }
    for(int j=n-2; j>=0; j--){
            cout << mat[n-1][j] << " ";
    }
    for(int i= n-2; i>=2; i--){
        cout << mat[i][0] << " ";
    }
    cout << mat[1][0];

    return 0;
}
