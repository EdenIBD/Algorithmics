#include <iostream>
using namespace std;
int main(){
    long long a, b, c, d;

    cin >> a >> b >> c >> d;
    //cmmmc b, d pentru aflarea numitorului comun
    long long r1, b_copie = b, d_copie = d, p = b*d;

    while(d != 0){
        r1 = b % d;
        b = d;
        d = r1;
    }

    long long numi_rs = p*b_copie, num_rs = a*numi_rs/b_copie + c*numi_rs/d_copie; // numi_rs =numitor_reductibil_suma, num_rs = numarator_reductibil_suma
    long long copie_numi_rs = numi_rs, copie_num_rs = num_rs, r2;
    //cmmdc numarator numitor fractie suma

    while(numi_rs != 0){
        r2 = num_rs % numi_rs;
        num_rs = numi_rs;
        numi_rs = r2;
    }

    cout << copie_num_rs / num_rs << " " << copie_numi_rs / num_rs << endl;

    long long num_rp = a*c, numi_rp = b_copie*d_copie;
    long long copie_num_rp = num_rp, copie_numi_rp = numi_rp, r3;

    while(numi_rp != 0){
        r3 = num_rp % numi_rp;
        num_rp = numi_rp;
        numi_rp = r3;
    }

    cout << copie_num_rp / num_rp << " " << copie_numi_rp / num_rp << endl;


    return 0;
}
