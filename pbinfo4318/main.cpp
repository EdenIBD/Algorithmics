#include <iostream>

using namespace std;

int main()
{
    int n, nrimpar = 0;

    cin >> n;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        int nrcif = 0;
        if(x == 0)nrcif++;
        else{
        while(x){
            nrcif++;
            x /= 10;
        }
        }


        if(nrcif % 2 == 1) nrimpar++;
    }

    cout << nrimpar;
    return 0;
}
