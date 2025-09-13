#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void FNume(char s[], char id[]){
    strcpy(id, strchr(s, ' ') + 1);
    strcat(id, "2022");
}

int main(){
    char id[55];
    FNume("David Popovici", id);

    return 0;
}