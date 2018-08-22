//Q.To convert from centimeters to meters and kilometers
//include library
#include <iostream>
using namespace std;

int main(){
//declaring 
float cm;
float km;
float m;
//asking user to input length in cm
cout << "please enter the length in cm" << endl;
cin >> cm;
//instruction for calculating and displaying output
m = (cm/100);
cout << "the length in meters in "<< m << "meter(s)" <<endl;


km = (cm/100000);
cout << "the length in kilometers is " << km << "kilometer(s)" <<endl;

return 0;




}
