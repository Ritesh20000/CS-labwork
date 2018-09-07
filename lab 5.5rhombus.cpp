//include library
#include <iostream>
using namespace std;
//write main function
	int main(){
	//input no. of rows
	int a;
	cout <<"include side of rhombus" <<endl;
	cin >> a;
	
	//condtion printing rhombus
	//print spaces
	for (int i=0; i < a; i++){
		for (int j=0; j < a-i; j++){
		cout << " ";}
		for (int j=0; j<a; j++){
		cout << "*";}
		for (int j=0; j<i; j++){
		cout << " ";}
		
cout<<endl;
	}	


return 0;
}
