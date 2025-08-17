#include <iostream>

using namespace std;

int concat(int a, int b){
    int p = 1;
    int copie = b;
    while(b){
        b /= 10;
        p *= 10;
    }


    return a*p + copie;

}






int main()
{
    cout << cocat(417, 32);
    return 0;
}
