//Q3 to find if a no. is postive, negative or zero



//include library
#include <iostream>
using namespace std;
//write main function
int main(){
            	//declare variable
                float a;
                // asking for input
                cout << "enter the number" <<endl;
                cin >> a;
                // deploy  condition and display
                if ( a > 0){
		cout << "the number is positive" <<endl;
		}
                else if (a < 0)
		cout << "the number is negative" <<endl;
		else cout << "the number is zero" <<endl;
return 0;
}
