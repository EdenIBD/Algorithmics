#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int c = 0;
    char s[255], voc[] = "aeiouAEIOU";
    cin.getline(s, 255);
    
    for(int i = 1; i < strlen(s) - 1; i++){
        if(strchr(voc, s[i]) != NULL &&
          strchr(voc, s[i-1]) == NULL &&
          strchr(voc, s[i+1]) == NULL &&
          s[i-1] != ' ' &&
          s[i+1] != ' ')
            c++;
    }

    cout << c;
    return 0;
}