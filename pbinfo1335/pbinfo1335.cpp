#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[250], s2[250], s[250];
    int nr = 0;
    cin >> s1 >> s2;
    if(strlen(s1) >= strlen(s2)){
        for(int i = 0; i < strlen(s1); i++){
            if(strchr(s2, s1[i]) != NULL){
                s[nr++] = s1[i];
            }
        }
    }
    else{ 
        for(int i = 0; i < strlen(s2); i++){
            if(strchr(s1, s2[i]) != NULL){
                s[nr++] = s2[i];
            }
        }
    }

    s[nr] = '\0';

    cout << s;
    return 0;
}