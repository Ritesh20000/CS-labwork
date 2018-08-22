//Q9 to enter P,T,R and calculate simple interest
//include library
#include <iostream>
#include <math.h>
using namespace std;

int main(){
//declaring 
float P;
float T;
float R;
float SI;
//ask user
cout << "kindly enter Principal value" <<endl;
cin >> P;
cout << "kindly enter time in years " <<endl;
cin >> T;
cout << "kindly enter Rate of interest per year in %" <<endl;
cin >> R;



//calc
SI = P*T*R/100;
//display
cout << "the interest to be paid at the end of " << T << " years is " << SI <<endl;
return 0;
}
