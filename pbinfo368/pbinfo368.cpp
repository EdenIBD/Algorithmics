#include <iostream>
using namespace std;

bool palindrom(int x){
    int copie = x, ogl = 0; 
    while(x){
        int cif = x % 10; 
        ogl = ogl*10 + cif;
        x /= 10; 
    }

    if(copie == ogl) return true;
    else return false;
}

int main(){
    int a, b, minn, maxx, c = 0;
    cin >> a >> b;
    if(a > b){
        minn = b;
        maxx = a;
    }
    else {
        minn = a;
        maxx = b;
    } 
    
    
    

    for(int i = minn+1; i < maxx; i++)
        if(palindrom(i)) c++;

    cout << c;

    return 0;
}