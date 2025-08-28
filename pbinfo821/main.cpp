#include <iostream>

using namespace std;

int cmmdc(int &a, int &b){
    int r;
    while(b != 1){
        r = a % b;
        a = b;
        b = r;
    }

    return a;

}

int main()
{
    int a,b;

    cin >> a >> b;

    cout << cmmdc(a, b);
    return 0;
}
