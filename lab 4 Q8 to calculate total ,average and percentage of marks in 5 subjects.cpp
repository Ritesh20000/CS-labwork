//Q8 to calculate total ,average and percentage of marks in 5 subjects
//include library
#include <iostream>
using namespace std;

int main(){
//declaring
float mark1;
float mark2;
float mark3;
float mark4;
float mark5;
float average;
float percentage;
float total;
//asking user
cout << "enter the marks out of 100 in any order" <<endl;
cin >> mark1;
cin >> mark2; 
cin >> mark3;
cin >> mark4;
cin >> mark5;
//calculating and displaying total
total = mark1 + mark2 + mark3 + mark4 + mark5;
cout << "total marks obtained = " << total <<endl;
//calculating and displaying average marks
average = total/5;
cout << "the average of marks obtained is " << average <<endl;
//calculating and displaying percentage of marks obtained
percentage = total*100/500;
cout << "the percentage of marks obtained is " << percentage << "%" <<endl;



return 0;
}
