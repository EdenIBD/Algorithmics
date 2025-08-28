#include <iostream>
using namespace std;

int main(){
    int maxx = 0, x;

    cin >> x;

    if(x == 0){
        cout << "NU EXISTA";
        return 0;
    }
    else if(x > maxx) maxx = x;

    while(x != 0){
        cin >> x;
        if(x > maxx) maxx = x;
    }

    cout << maxx;

    return 0;
}
