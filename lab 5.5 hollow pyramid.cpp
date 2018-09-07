//include library
#include <iostream>
using namespace std;
//write main function
	int main(){
	//input no. of rows
	int a;
	cout <<"include height and base of triangle" <<endl;
	cin >> a;
	//print stars
	for (int j=0; j<a; j++){
	cout <<" ";
}
cout <<"*"<<endl;
for (int i=0; i<a-2; i++){
	for (int j=0; j<a-i-2;j++){
	cout << " ";}
	cout <<"*";
	for (int j=0; j<2*(i+1); j++){
	cout << " ";}
	cout <<"*";
	cout <<endl;
}
for (int j=0; j<2*a;j++){
cout << "*";
}
return 0;
}
