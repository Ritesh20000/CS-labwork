//Q3 fahrenheits to celsius converter
//include library
#include <iostream>
using namespace std;
int main(){
//declaring
float cel;
float fah;
float cels;
//asking user to input temperature in fahrenheits
cout << "please enter the temperature in fahrenheits" <<endl;
cin >> fah;

//instruction to calculate
cel = fah - 32;

cels = 5*cel/9;
cout << "the temperature in celsius is "<<cels << "C" <<endl;
return 0;

}
