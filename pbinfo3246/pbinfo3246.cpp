#include <iostream>
using namespace std;

bool echilibrat(int x){
    int c1 = 0, c2 = 0;
    while(x){
        int cif = x % 10;
        if(cif % 2 == 0)
            c1++;
        if(cif % 2 != 0)
            c2++;
        x /= 10;
    }

    if(c1 == c2 && (c1+c2) % 2 == 0) return true;
    else return false;
}

int main(){
    int a, b, minn, maxx;
    long long s = 0;
    cin >> a >> b;
    if(a > b){
        minn = b;
        maxx = a;
    }
    else{
        minn = a;
        maxx = b;
    }

    for(int i = minn; i <= maxx; i++)
        if(echilibrat(i) == true)
            s += i;

    cout << s;
    return 0;
}