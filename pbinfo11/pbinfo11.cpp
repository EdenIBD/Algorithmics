#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[20], voc[] = "aeiou";
    cin >> s;
    for(int i = 1; i < strlen(s); i++){
        if(strchr(voc, s[i]) != NULL) s[i] = s[i] - 32;
    }

    cout << s;
    
    return 0;
}