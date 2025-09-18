#include <iostream>
using namespace std;

int main(){
    int l, c, s = 0;
    cin >> l >> c;
    int a[103][103];

    for(int i = 0; i <= l+1; i++)
        for(int j = 0; j <= c+1; j++)
            a[i][j] = 11;

    for(int i = 1; i <= l; i++)
        for(int j = 1; j <= c; j++)
            cin >> a[i][j];
            
    for(int i = 1; i <= l; i++){
        
        for(int j = 1; j <= c; j++){
            int minn = 11;
            int v[4] = {a[i-1][j], a[i+1][j], a[i][j-1], a[i][j+1]};
            for(int k = 0; k <= 3; k++)
                if(v[k] < minn)
                    minn = v[k]; 
            if(a[i][j] < minn) s = s + minn - a[i][j];
        }
    }

    cout << s;

    return 0;
}