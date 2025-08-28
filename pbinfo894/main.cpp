#include <iostream>

using namespace std;

void cifminmax(int n, int &maxx, int &minn){
    maxx = 0;
    minn = 10;

    if(n == 0){
        minn = 0;
        maxx = 0;
    }
    else{
    while(n){
        int cif = n % 10;
        if(cif > maxx) maxx = cif;
        if(cif < minn) minn = cif;

        n /= 10;
    }
    }



}

int main()
{
    int n, minn, maxx;
    cin >> n;

    cifminmax(n, maxx, minn);

    cout << maxx << " " << minn;
    return 0;
}
