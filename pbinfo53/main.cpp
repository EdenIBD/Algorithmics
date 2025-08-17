#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int>v;
    int x;
    while (cin >> x && x != 0) {
        v.push_back(x);
    }
    int nr_impare = 0;
    for(int i = 0; i<v.size(); i++){
        if( v[i] % 2 != 0) {
                nr_impare+=1;
        }
                }
    cout << nr_impare;
    return 0;
}


