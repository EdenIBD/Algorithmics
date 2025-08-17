#include <iostream>

using namespace std;

void subp(int &a, int b){
    a = 5; b = 10;

    cout << a << " " << b << endl;




}

int main()
{
    int a = 0, b = 0;

    subp(a, b);

    cout << a << " " << b;


    return 0;
}
