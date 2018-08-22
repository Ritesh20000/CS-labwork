//Q9 to enter P,T,R and calculate compound interest
//include library
#include <iostream>
#include <math.h>
using namespace std;

int main(){
//declaring 
float P;
float T;
float R;
float CI;
float Ci;
//ask user
cout << "kindly enter Principal value" <<endl;
cin >> P;
cout << "kindly enter time in years " <<endl;
cin >> T;
cout << "kindly enter Rate of interest per year in %" <<endl;
cin >> R;
//display
CI = P*pow(1+R/100,T);
Ci = CI - P;
cout << "the interest to be paid at the end of " << T << "year(s) is " << Ci <<endl;
return 0;
}

