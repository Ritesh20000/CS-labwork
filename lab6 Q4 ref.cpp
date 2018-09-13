//Q4 find sum and display the minimum of the two
//include library
#include <iostream>
using namespace std;
//the function 
void SUMandMin (int& a, int& b)
{
//enter and sum the numbers

	cout << "kindly enter the numbers to sum"<< endl;
	cin >> a;
	cin >> b;
	int sum;
	sum = a + b;
	//find maximum
	if (a<b)
		cout << "the minimum is" <<a<<endl;
	else
		cout << "the minimum is" <<b<<endl;
		
	//display
	cout << "the sum is "<< sum << " have a nice day "<<endl;
}	
//to the main function!!
int main(){
	int a,b;
	SUMandMin(a,b);
	return 0;
}
