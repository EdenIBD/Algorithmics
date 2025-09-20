#include <iostream>
#include <string.h>
using namespace std;

bool palindrom(char s[]){
    char copie[256];
    strcpy(copie, s);
    for(int i = 0; i < strlen(copie); i++){
        if(copie[i] >= 'A' && copie[i] <= 'Z'){
            copie[i] += 32;
        }
    }
    
    for(int i = 0; i < strlen(copie) / 2; i++)
        if(copie[i] != copie[strlen(copie)-i-1])
            return false;
          
    return true;
}

int main(){
    char s[256], *p, maxx[256];
    int ok = 0;
    cin.get(s, 256);

    p = strtok(s, " ,.;:");
    while(p){
        if(palindrom(p) == true){
            if(ok == 0){
                strcpy(maxx, p);
                ok = 1;
            }
            else if(strlen(maxx) < strlen(p))
                strcpy(maxx, p);
        }

        p = strtok(NULL, " ,.;:");
    }

    cout << maxx;

    return 0;
}