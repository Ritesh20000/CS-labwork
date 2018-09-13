//Q2 find sum and maximum through reference
//include library
#include <iostream>
using namespace std;
//the function

void SUMandMAXR (int& a, int& b)
{
//enter and sum the numbers
	cout << "kindly enter the numbers to sum"<< endl;
	cin >> a;
	cin >> b;
	int sum;
	sum = a + b;
	cout << "the sum of the numbers is " << sum <<endl;
	//find and display maximum
	if (a>b)
		cout << "the maximum is" <<a<<endl;
	else
		cout << "the maximum is" <<b<<endl;}
		
//ze main function!
int main(){
	int a,b;
	SUMandMAXR (a,b);
	cout << " have a nice day" <<endl;
	return 0;
	
}
