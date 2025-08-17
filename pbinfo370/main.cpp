#include <iostream>

using namespace std;

int main()
{
    int n, k, suma = 0;
    cin >> k >> n;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        int copie = x;
        int s = 0;
        while(x){
            s += x % 10;
            x /= 10;
        }

        if(s % k == 0) suma+= copie;
    }

    cout << suma;
}
