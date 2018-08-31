//to check if a number is divisible by 5 and 11
//include library
#include <iostream>
using namespace std;
//write main function
int main(){
            	//declare variable
                int a;
                // asking for input
                cout << "enter the number" <<endl;
                cin >> a;
                // deploy  condition(check divisibility by 11 and 5) and display
                if (a%55 == 0){
                cout << "the number is divisible by 5 and 11" <<endl;
                }
		else cout << " the number is not divisible by 5 and 11 " <<endl;
return 0;
}
