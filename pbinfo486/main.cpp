#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i = 0; i<v.size(); i++) cin >>v[i];
    int minim = v[0];
    int maxim = v[0];

    for(int i = 0; i<v.size(); i++){
        if(v[i] > maxim) maxim = v[i];
        if(v[i] < minim) minim =v[i];
    }
    cout << minim << maxim;
    return 0;
}
