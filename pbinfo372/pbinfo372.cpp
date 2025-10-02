#include <iostream>
using namespace std;
int sumcif(int x){
    int s; 
    while(x){
        s += x % 10;
        x /= 10;
    }

    return x;
}

int main(){
    int n, c = 0; 
    cin >> n;
    int v[101];
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    for(int i = 1; i < n ; i++)
        if((sumcif(v[i]) % 2 == 0 && sumcif(v[i+1]) % 2 != 0) || (sumcif(v[i]) % 2 != 0 && sumcif(v[i+1]) % 2 == 0))
            c++;
    

    cout << c; 
    return 0;
}