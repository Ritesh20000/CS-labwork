//Q1 to find maximum of 3 no.s
//include library
#include <iostream>
using namespace std;
//write main function
int main(){
            	//define variable
		float a,b,c;
		cout << "kindly enter the 3 numbers" << endl;
		//asking the user the 3 numbers

		cin >> a;
		cin >> b;
                cin >> c;

		//deploy condition and display
     		   if (a > b && a > c)
        		{ 
       			 cout << a <<" is the maximum number, have a nice day" <<endl;
       			 }
	           else if ( b > c && b > a)
                   
                   cout << b <<" is the maximum number, have a nice day" <<endl;
                   else if ( c > b && c > a)
                   cout << c <<" is the maximum number, have a nice day" <<endl;
                   else 
	           cout << "the numbers are equal, have a nice day" <<endl;
		   
return 0;
}
