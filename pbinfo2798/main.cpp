#include <iostream>

using namespace std;

int nrcif(int x){
    int nrcif = 0;
    while(x){
        x /= 10;
        nrcif++;
    }

    return nrcif;
}

int echilibrat(int n){
    int sum_pare = 0, sum_imp = 0, pos = 0;
	while(n){
        int c = n % 10;
        if(pos % 2 == 0) sum_pare += c;
        else             sum_imp  += c;
        n /= 10;
        pos++;
    }

    if(sum_pare % 2 == 0 && sum_imp % 2 == 1) return 1;
    else return 0;

}

int main(){
    cout << echilibrat(12345);


}
