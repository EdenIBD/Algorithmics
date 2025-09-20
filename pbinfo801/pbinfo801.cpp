#include <iostream>
#include <string.h> 
using namespace std;

int main(){
    char s[256], *p, rez[256]= "";
    cin.get(s, 256);
    p = strtok(s, " ");

    while(p){
        strcat(rez, p);
        strcat(rez, " ");
        p = strtok(NULL, " ");
    }

    cout << rez;

    return 0;
    

}