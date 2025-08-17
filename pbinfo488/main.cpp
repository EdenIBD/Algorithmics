#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>vector(n);
    for(int i = 0; i<vector.size(); i++){
        cin >> vector[i];
    }
    for(int i = 0; i<vector.size(); i++){
        if(i % 2!= 0){
            cout << vector[i] << " ";
        }
        else continue;
    }
    cout << endl;
    for(int i = n-1; i>=0 ;i--){
        if(i % 2 == 0){
            cout << vector[i] << " ";
        }
        else continue;
    }


    return 0;
}
