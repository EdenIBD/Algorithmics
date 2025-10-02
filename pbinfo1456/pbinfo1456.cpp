#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[100], voc[] = "aeou";
    int c = 0;
    cin >> s;
    bool ok = true;

    for(int i = 1; i < strlen(s); i++){
        if(strchr(voc, s[i]) != NULL || s[i] == 'i' && s[i+1] == 'i'){
            ok = false;
            break;
        }
    }

    if(ok) cout << "DA";
    else cout << "NU";

    return 0;
}