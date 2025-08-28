#include <iostream>

using namespace std;

int sum_div(int n){
    int sum = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
                sum += i;
        if(i != n/i) sum += n/i;
    }
    }

    return sum;
}




int main()
{
    cout << sum_div(12);
    return 0;
}
