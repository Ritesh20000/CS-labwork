//Q3 find sum and max values
//include library
#include <iostream>
using namespace std;
//the function

int SUMandmin (int a, int b)
{
//enter and sum the numbers
	cout << "kindly enter the numbers to sum"<< endl;
	cin >> a;
	cin >> b;
	int sum;
	sum = a + b;
	
        if (a>b){
 		cout << "the minimum is "<<b <<endl;}
	
	else
		
		cout << "the minimum is" <<a <<endl;
		return (sum);
	
}


//to the main function!!
int main(){
	int a,b;
	int sum = SUMandmin(a,b);
	
	//display
	cout << "the sum is "<< sum << " have a nice day "<<endl;
	
	return 0;
}
