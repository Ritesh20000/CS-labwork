//Q3 find sum and max values
//include library
#include <iostream>
using namespace std;
//the function

int SUM (int a, int b)
{
//enter and sum the numbers
	cout << "kindly enter the numbers to sum"<< endl;
	cin >> a;
	cin >> b;
	int sum;
	sum = a + b;
	
        if (a>b){
 		cout << "the maximum is "<<a <<endl;}
	
	else
		
		cout << "the maximum is" <<b <<endl;
		return (sum);
	
}


//to the main function!!
int main(){
	int a,b;
	int sum = SUM(a,b);
	
	//display
	cout << "the sum is "<< sum << " have a nice day "<<endl;
	
	return 0;
}
