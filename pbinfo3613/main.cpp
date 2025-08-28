#include <iostream>
#include <cmath>
using namespace std;

bool patrat_perfect(int x){
    if(sqrt(x) == (int)(sqrt(x))) return true;

    return false;
}

int multiplu(int n){
    int copie = n;

    while(patrat_perfect(copie) == false){
            copie += n;
    }

    return copie;

}

int main(){
    int n;

    cin >> n;

    cout << multiplu(n);



}
