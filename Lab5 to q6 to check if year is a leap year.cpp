//to check if a year is a leap year or not
//include library
#include <iostream>
using namespace std;
//write main function
int main(){
            	//declare variable
                int a;
                // asking for input
                cout << "enter the year" <<endl;
                cin >> a;
                // deploy  condition(check if leap year or not) and display
                if (a%4 == 0 && a%100 != 0 or a%400 == 0){
                cout << "the year is a leap year" <<endl;
                }
		else cout << " the number is not a leap year" <<endl;
return 0;
}
