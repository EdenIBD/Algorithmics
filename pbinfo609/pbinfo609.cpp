#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[201], voc[] = "aeiou";
    cin.get(s, 101);
    for(int i = strlen(s) - 1; i >= 0; i--){
        if(strchr(voc, s[i]) != NULL){
            char aux[201];
            strcpy(aux, s+i);
            strcpy(s+i+1, aux); 
        }
    }

    cout << s;

    return 0;
}