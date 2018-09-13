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


	void MAXR (int a, int b)
	{
	//enter and sum the numbers
	//find and display maximum
	cin >> a;
	cin >> b;
	if (a>b)
		cout << "the maximum is" <<a<<endl;
	else
		cout << "the maximum is" <<b<<endl;}

	void Min (int& a, int& b)
	{
	//enter and sum the numbers
	cin >> a;
	cin >> b;

	if (a<b)
		cout << "the minimum is" <<a<<endl;
	else
		cout << "the minimum is" <<b<<endl;
		
	//display
	
	}

	int main(){
	int a, b, c;
	cout << " if you want sum enter 1, if minimum enter 2,if maximum enter 3 " <<endl;
	cin >> c;
	if (c == 1){
	SUM(a, b);}
	else if (c==2)
	Min(a, b);
	else{
	MAXR (a, b);}
	return 0;
}
	
	






		
