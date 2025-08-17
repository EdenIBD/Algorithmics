#include <iostream>

using namespace std;

int main()
{
    int n, nrcifre = 0;

    cin >> n;

    int copie = n;

    while(n){
        n/=10;
        nrcifre++;
    }

    if(copie == 0) nrcifre = 1;
    cout << nrcifre;

    return 0;
}
