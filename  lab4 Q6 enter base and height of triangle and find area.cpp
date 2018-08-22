//Q5 enter base and height of triangle and find area
//include library
#include <iostream>
using namespace std;
int main(){
//declaring
float base;
float height;
float area;
//politely ask the user the base and height of triangle
cout <<"kindly enter the base and height of the triangle in any order" <<endl;
cin >> base;
cin >> height;
//instruction to calculate
area = base*height*0.5;
//displaying
cout << "the area of the triangle is " << area << "unit(s)" <<endl;
return 0;
}
