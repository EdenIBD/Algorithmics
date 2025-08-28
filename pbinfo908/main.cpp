#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i <= x;i++){
        if(x % i == 0) return false;
    }

    return true;

}

void afisare(int a, int b){
    int minn, maxx;
    if(a>=b) maxx = a, minn = b;
    if(b>a)  maxx = b, minn = a;
    for(int i = minn;i<=maxx;i++){
        if(prim(i) == true) cout << i << " ";
    }
}

int main()
{
    int a, b;

    cin >> a >> b;

    afisare(a, b);
    return 0;
}
