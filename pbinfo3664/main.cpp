#include <iostream>

using namespace std;

int main()
{
    int n, p = 0, i = 0;

    cin >> n;

    for(int j = 0; j<n; j++){
        int x;
        cin >> x;
        if(x == 0){
            p++;
            continue;
        }
        while(x){
        int cif = x % 10;
        if(cif % 2 == 0) p++;
        else if(cif == 0) p++;
        else i++;

        x /= 10;
        }
    }

    cout << p << " " << i;
}
