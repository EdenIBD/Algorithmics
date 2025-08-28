#include <iostream>

using namespace std;

int control(int x){
    while(x > 9){
        int copie = x, s = 0;
        while(copie){
            s += copie % 10;
            copie /= 10;
        }

        x = s;
    }


    return x;
}

int sum_cifra_control(int a, int b){
	int nr = 0;
    for (int i = a; i<= b; i++){
      	if (control(i) == a)nr++;
    }

    return nr;
}

int main()
{
    cout << sum_cifra_control(2,100);
    return 0;
}
