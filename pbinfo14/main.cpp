#include <iostream>

using namespace std;

int prim(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0 && n > 2) return 0;

    for(int i = 3; i * i <= n; i = i+2){
            if(n % i == 0) return 0;
    }

    return 1;

}

int main()
{
    cout << prim(36);
    return 0;
}
