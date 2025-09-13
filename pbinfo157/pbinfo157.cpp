#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("doarvocale.in");
ofstream fout("doarvocale.out");

int main(){
    int n, c = 0;
    char s[1001];
    fin >> n;

    for(int i = 0; i<n; i++){
        fin >> s;
        bool ok = true;
        for(int j = 0; j < strlen(s); j++)
            if(strchr("aeiou", s[j]) == NULL) 
                ok = false;
        if(ok)
            c++;
    }

    fout << c;

    return 0;
}