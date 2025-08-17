#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int x_initial, y_initial;
    cin >> x_initial >> y_initial;
    int x = x_initial;
    int y = y_initial;
    int x_final = 0;
    int y_final = 0;
    int nr_cifre_pare_x = 0;
    int nr_cifre_impare_x = 0;
    int nr_cifre_pare_y = 0;
    int nr_cifre_impare_y =0;

	vector<int> vx;
    vector<int> vy;


    while(x > 0){
        vx.push_back(x%10);
        x = x/10;
    }

    while(y > 0){
        vy.push_back(y%10);
        y=y/10;
    }
  /*  for(int i = 0; i<vx.size(); i++){
        cout << vx[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<vx.size(); i++){
        cout << vy[i] << " ";
    }
*/

    for(int i = 0; i<vx.size(); i++){
        if(vx[i] % 2 == 0) nr_cifre_pare_x++;
    }
    for(int i = 0; i<vx.size(); i++){
        if(vx[i] % 2 == 1) nr_cifre_impare_x++;
    }
   // cout << nr_cifre_pare_x << nr_cifre_impare_x;
   // cout << vx.size() << " " << vy.size() << endl;
    if(x_initial % 2 == 0){
        for(int i = vx.size() - 1; i>=0; i--){
            if(vx[i] % 2 == 0){ x_final += vx[i]*pow(10,(nr_cifre_pare_x - 1));
            nr_cifre_pare_x = nr_cifre_pare_x - 1;
            }
        }
    }
     if(x_initial % 2 != 0){
        for(int i = vx.size() - 1; i>=0; i--){
            if(vx[i] % 2 != 0){ x_final += vx[i]*pow(10,(nr_cifre_impare_x - 1));
            nr_cifre_impare_x = nr_cifre_impare_x - 1;
            }
        }
    }

    for(int i = 0; i<vy.size(); i++){
    	if(vy[i] % 2 == 0) nr_cifre_pare_y++;
	}
	for(int i = 0; i<vy.size(); i++){
    	if(vy[i] % 2 == 1) nr_cifre_impare_y++;
	}
	if(y_initial % 2 == 0){
        for(int i = vy.size() - 1; i>=0; i--){
        	if(vy[i] % 2 == 0){ y_final += vy[i]*pow(10,(nr_cifre_pare_y - 1));
       	 	nr_cifre_pare_y = nr_cifre_pare_y - 1;
        	}
    	}
	}
	if(y_initial % 2 != 0){
	    for(int i = vy.size() - 1; i>=0; i--){
       	 if(vy[i] % 2 != 0) {y_final += vy[i]*pow(10,(nr_cifre_impare_y - 1));
        nr_cifre_impare_y = nr_cifre_impare_y - 1;
       	 }
    	}
	}

    if (x_final < y_final) {
    cout << y_initial;
}
    else if (x_final > y_final) {
    cout << x_initial;
}
    else {
    cout << (x_initial > y_initial ? x_initial : y_initial);
}


    //cout << x_final << " " << y_final;

    return 0;
}

