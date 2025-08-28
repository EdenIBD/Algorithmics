#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int v[1001], maxx = -100000000, pos = 0;

    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }

    for(int i = 1; i<=n; i++)
        if(v[i] > maxx) maxx = v[i];

    for(int i = 1; i<=n; i++){
        if(v[i] == maxx){
            pos = i;
            break;
        }
    }

    for(int p = pos; p < n; p++)
        v[p] = v[p+1];
    n--;

    int maxx2 = -10000000000;

    for(int i = 1; i<=n; i++){
        if(v[i] > maxx2) maxx2 = v[i];
    }

    cout << maxx << " " << maxx2;

    return 0;
}
