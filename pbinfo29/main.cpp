#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i<= x; i+=2){
        if(x % i == 0) return false;
    }

    return true;

}


void sub(int n, int &a, int &b){
    int nr = 0;
    for(int i = n-1; i>=2; i--){
        if(prim(i) == true && nr == 0){
            a = i;
            nr++;
            continue;
        }
        if(prim(i) == true && nr == 1){
            b = i;
            break;
        }

    }


}

int main()
{
    int n, a, b;
    cin >> n;

    sub(n, a, b);

    cout << a << " " << b;
    return 0;
}
