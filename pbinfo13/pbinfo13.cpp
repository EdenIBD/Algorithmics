#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[11], t[11];
    cin >> s;
    strcpy(t, s);
    for(int i = strlen(s); i >= 1; i--){
        s[i] = '\0';
        cout << s << endl; 
    }

    for(int i = 0; i<strlen(t); i++){
        cout << t + i << endl;
    }
    return 0;
}