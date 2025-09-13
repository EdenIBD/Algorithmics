#include <iostream>
using namespace std;

int main(){
    int k, c = 0, n = 1;

    cin >> k;

    while(n != 0){
        cin >> n;
        int copie = n, copie2 = n;

        while(copie){
        int cif = copie % 10;

        if(cif == k && copie2 % 2 == 0) c++;

        copie /= 10;
        }

    }


    cout << c;

    return 0;
}
