//Q2 celsius to fahrenheit converter
//include library
#include <iostream>
using namespace std;
int main(){
//declaring
float cel;
float fah;
//asking user to input temperature in celsius
cout << "please input temperature in celsius" <<endl;

cin >> cel;
//instruction to convert
fah = 1.8*cel + 32;
cout << "the temperature in fahrenheits is " << fah << "fahrenheit(s)" <<endl;
return 0;

}

