#include <iostream>

using namespace std;

int main()
{
    int n, P = 0, I = 0;

    cin >> n;

    int copie = n;

    while(n){
        int cif = n%10;
        if(cif % 2 == 0)P++;
        else I++;
        n /=10;
    }
    if(copie == 0)P = 1;
    cout << P << " " << I;
    return 0;
}
