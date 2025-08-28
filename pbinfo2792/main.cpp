#include <iostream>

using namespace std;

bool prim(int x){
    if(x <= 1) return false;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i <= x; i+=2){
        if(x % i == 0) return false;
    }

    return true;
}

int interval(int n){
    int copie = n;
    copie++;
    while(prim(copie) == false){
        copie++;
    }

    return copie+1;


}


/*
int interval(int n){
    for(int x = n+1;x<n*n;x++){
        int ok = 1, j = 0;
        for(int i = 2;i<x;i++){
            if(x % i == 0 && x != 2) ok = 0;
        }
        if(ok == 1) j++;

        if(j == 1)return x+1;

    }


}
*/

int main()
{
    cout << interval(293);
    return 0;
}
