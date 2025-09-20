#include <iostream>
using namespace std;

int main(){
    int n, k = 1, v[1001];
    cin >> n;
    while(n > 9){
        v[k] = n % 10;
        k++;
        n /= 10;
    }
    
    for(int i = 1; i < k; i++)
        for(int j = 1; j < k; j++)
            if(v[j] > v[j+1])
                swap(v[j], v[j+1]);

    for(int i = 1; i < k; i++)
        cout << v[i] << " ";

    return 0;
}
