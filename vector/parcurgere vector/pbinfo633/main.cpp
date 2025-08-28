#include <iostream>

using namespace std;

int main()
{
    int n, v[1000], nr_imp = 0, nr_par = 0;
    cin >> n;

    for(int i = 0; i<n;i++){
        cin >> v[i];
        if(v[i] % 2 == 0)nr_par++;
        else nr_imp++;
    }

    if(nr_par >= nr_imp) cout << nr_par - nr_imp;
    else cout << nr_imp - nr_par;

    return 0;
}
