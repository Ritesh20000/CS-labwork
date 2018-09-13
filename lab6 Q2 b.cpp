//Q2 find sum through reference
//include library
#include <iostream>
using namespace std;
//the function

void SUM (int& a, int& b)
{
//enter and sum the numbers
	cout << "kindly enter the numbers to sum"<< endl;
	cin >> a;
	cin >> b;
	int sum;
	sum = a + b;
	cout << "the sum of the numbers is " <<sum << " have a nice day"<<endl;}
	
//ze main function!
int main(){
	int a,b;
	SUM (a,b);
	return 0;
	
}
