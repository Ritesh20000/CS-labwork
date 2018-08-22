//Q5 enter 2 angles of a triangle and get the third angle
//include library
#include <iostream>
using namespace std;
int main(){
//declaring 
float angle1;
float angle2;
float angle3;
//asking user for 2 angles
cout << "please enter 2 angles of the triangle in degress" <<endl;
cin >> angle1;
cin >> angle2;
//instruction
angle3 = 180 - angle1 - angle2;
//displaying
cout << "the third angle is "<< angle3 << "degree(s)" <<endl;


}
