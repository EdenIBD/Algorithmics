#include <iostream>

using namespace std;


int nrdiv_prim(int n){
   int d = 2, p, prod = 1;
   while(n != 1){
        p = 0;
        while(n % d == 0){
            n /= d;
            p++;
        }
        if(p != 0) prod *= d;

        d++;
        if(n > 1 && d*d > n)
            d = n;
   }

    return prod;

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
