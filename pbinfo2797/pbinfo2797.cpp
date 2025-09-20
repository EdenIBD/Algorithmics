#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[101], *p , maxx[101];
    int ok = 0;
    cin.get(s, 101);
    p = strtok(s, " ");
    while(p){
        if(p[0] >= '0' && p[0] <= '9'){
            if(ok == 0){
                strcpy(maxx, p);
                ok = 1;
            }
            else if(strcmp(p, maxx) > 0) 
                strcpy(maxx, p);
        }
        p = strtok(NULL, " ");
    }

    if(ok == 0)
        cout << "nu exista";
    else
        cout << maxx;

    return 0;
}