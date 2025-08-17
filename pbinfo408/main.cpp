#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int nr_cifre = 0;
    int clona1 = n;
    int clona2 = n;
    int nr_divizori = 0;
    int oglindit  = 0;
    while(clona1 >0){
        clona1 = clona1/10;
        nr_cifre++;
    }
   // cout << nr_cifre << endl;
    while(nr_cifre>0){
        oglindit += (clona2 % 10)*pow(10,(nr_cifre - 1));
                                      nr_cifre = nr_cifre -1;
                                      clona2=clona2 / 10;
                                      }
                                     // cout << oglindit;

                                      for(int i = 1; i<=oglindit;i++){
                                          if(oglindit % i == 0) nr_divizori++;
                                      }
                                      cout << nr_divizori;
                                      return 0;
                                      }


