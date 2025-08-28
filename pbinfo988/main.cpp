#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("prime.in");
ofstream fout("prime.out");

bool prim(int n){
    if(n <= 1) return false;
    if(n % 2 == 0) return n == 2;
    for(int i = 3; i*i <= n;i++){
        if(n % i == 0) return false;
    }

    return true;
}
int main()
{
    int n;
    fin >> n;

    for(int i = 0; i<n;i++){
        int x;
        fin >> x;
        if(prim(x) == true) fout << x << " ";
    }

    return 0;
}
