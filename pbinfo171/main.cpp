#include <iostream>

using namespace std;
int minst(int x){
    int copie = x;
    while(x>9) x /= 10;


    return x;
}
int main()
{
int n, maxx = -2000000000, minn = 10, nr;
    cin >> n;
    for(int i = 1; i<=n; i++){
        int x;
        cin >> x;

        if(minst(x) < minn){
            minn = minst(x);
            maxx = x;
        }
        else if(minst(x) == minn && x > maxx)
            maxx = x;

    }

    cout << maxx;
    return 0;
}
