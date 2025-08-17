#include <iostream>

using namespace std;

int main()
{
    long long n, m, pn = 1, pm = 1;

    cin >> n >> m;

    long long nc = n, mc = m; //copie n, m

    //aflu produsul divizorilor primi n
    if(n % 2 == 0){
        while(n % 2 == 0){
            n /= 2;
        }
        pn*=2;
    }
    for(long long d = 3; d*d <= n;d=d+2){
        if(n%d == 0){
            while(n % d == 0){
            n /= d;
        }
        pn*=d;
    }
    }

    if(n>1) pn *= n;

    //aflu produsul divizorilor primi m

    if(m % 2 == 0){
        while(m % 2 == 0){
            m /= 2;
        }
        pm*=2;
    }
    for(long long d = 3; d*d <= m;d=d+2){
        if(m%d == 0){
            while(m % d == 0){
            m /= d;
        }
        pm*=d;
    }
    }

    if(m>1) pm *= m;

    //afisare

    if(pn > pm) cout << nc;
    else if(pn < pm) cout << mc;
    else if(pn == pm){
        if(nc >= mc) cout << mc;
        else cout << nc;
    }


    return 0;
}
