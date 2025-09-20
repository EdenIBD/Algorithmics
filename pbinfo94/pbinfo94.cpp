#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[21], voc[] = "aeiou";
    cin >> s;
    for(int i = strlen(s) - 1; i >= 0; i--){
        if(strchr(voc, s[i]) != NULL){
            char aux[21];
            strcpy(aux, s + i + 1);
            strcpy(s+i, aux);
        }

    }

    cout << s;

    return 0;
}