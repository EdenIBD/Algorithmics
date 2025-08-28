#include <iostream>

using namespace std;

int main()
{
    int n, nr = 0;cin >> n;
    double v[201];

    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }
    double minn, maxx;

    if(v[1] >= v[n]){
            maxx = v[1];
            minn = v[n];
    }
    else{
            maxx = v[n];
            minn = v[1];
    }

    cout << minn << " " << maxx << endl;

    for(int i = 1; i<=n; i++){
        if(v[i] < minn || v[i] > maxx) nr++;
    }

    cout << nr;


    return 0;
}
