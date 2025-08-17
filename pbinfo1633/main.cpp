#include <iostream>

using namespace std;

void dublare1(int &a){

    int copie = a, p = 1;

    while(a>9){
        a /= 10;
        p *= 10;
    }

    a = a*p*10 + copie;

}

int main()
{
    int a;

    cin >> a;

    dublare1(a);

    cout << a;
    return 0;
}
