#include <iostream>

using namespace std;

int main()
{
    long long a, b, s = 0;
    cin >> a >> b;

    for(int i = a; i<=b; i++){
        int s_p = 0, s_i = 0;
        int j = i;
        while(j){
            int cif = j % 10;

            if(cif % 2 == 0 || cif == 0)s_p+=cif;
            else s_i+=cif;

            j /= 10;
        }

        if(s_p == s_i) s+=i;
    }

    cout << s;
    return 0;
}
