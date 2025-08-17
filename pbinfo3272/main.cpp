#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    long long s = 0;
    cin >> n;

    for(int i = 1; i<=n; i++){
        long long x;
        cin >> x;
        int s2 = 0;
        long long clona = x;

        int ogl = 0;
        while(x){
            ogl = ogl*10 + x%10;
            x /= 10;
        }

        for(int j = 1; j*j<=ogl; j++){
            if(ogl % j == 0 && j != sqrt(ogl)) s+= j;
            else if(ogl % j == 0 && j == sqrt(ogl)) s+= j;
            if(ogl % j == 0 && ogl/j > sqrt(ogl)) s+= ogl/j;
        }

    }

    cout << s;

    return 0;
}
