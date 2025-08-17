#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int S = 0;
    vector<vector<int>>v(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> v[i][j];
            if(v[i][j] % 2 == 0) S+= v[i][j];
            else continue;
        }
    }
    cout << S;
 	return 0;
                                }

