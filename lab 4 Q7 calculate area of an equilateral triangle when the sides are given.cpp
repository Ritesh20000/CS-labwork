//Q7 calculate area of an equilateral triangle when the sides are given
//include library
#include <iostream>
#include <math.h>
using namespace std;

int main(){
//declaring 
float side;
float area;
//asking the user the side
cout << "please enter the side length of the equilateral triangle" <<endl;
cin >> side;
//calculation
area = (sqrt (3))*(side*side)/4;

//displaying
cout << "the area of the triangle is " << area << "sq.units" <<endl;




return 0;
}
