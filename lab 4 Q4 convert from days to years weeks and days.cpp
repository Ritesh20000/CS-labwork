//Q4 convert days into years weeks and days
//include library
#include <iostream>
using namespace std;
int main(){
//declaring 
int years;
int weeks;
int days;
int input;
//asking user to input no. of days
cout << "please enter the no. of days" << endl;
cin >> input;
//instruction to calculate
years = input/365;
weeks = (input - years*365)/7;
days = input - years*365 - weeks*7;
cout << input << "days is " << years << "year(s)" << weeks << "week(s) and" << days << "day(s)" <<endl;
return 0;
}
