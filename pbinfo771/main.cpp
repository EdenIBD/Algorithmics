#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> v[i][j];
        }
    }
    vector<int>S(n, 0);
    for(int i = 0; i<n; i++){
        for(int j = 0;j<m;j++){
            S[i] += v[i][j];
        }
    }
    for(int i= 0; i < n-1; i++){
        for(int j=i+1; j<n; j++){
            if(S[i] > S[j]){
                swap (S[i], S[j]);
                swap (v[i], v[j]);
            }
        }
    }
    for(int i = 0 ; i < n; i++){
            for(int j= 0; j<m;j++){
        cout << v[i][j] << " ";
    }
    cout << endl;
    }
    return 0;
}


