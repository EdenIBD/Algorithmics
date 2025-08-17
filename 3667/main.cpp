#include <iostream>

using namespace std;

int main()
{
    int n, nr = 0;

    cin >> n;

    int* a = new int[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        int ciframax = 0;
        while(a[i]){
            int cif = a[i] % 10;

            if(cif >= ciframax)ciframax = cif;

            if(ciframax % 2 != 0) nr++;

            a[i] /= 10;
        }
    }

    cout << nr;
    delete[] a;
    return 0;
}
