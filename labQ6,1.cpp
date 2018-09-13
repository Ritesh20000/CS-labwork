#include <iostream>
using namespace std;

//function that takes value fo=rom user and returns a value for unitCst ,units, and taxRt
void fun1(int& u, int& c, int& r)
		{
		cout <<"kindly enter the value for units" <<endl;
		cin >>u;
		cout <<"kindly enter the value for unit costs" <<endl;
		cin >> c;
		cout << "kindly enter the value for unit rate" <<endl;
		cin >>r;
		}
//function that recievs the values for u,c,r and calculates salestax and total due
void fun2(int u, int c, int r, int& st, int&totdue){
//calculate st and totdue
st = u*c*r;
totdue = st + (c*u);
}
void fun3(int u, int c, int r, int st, int totdue){
cout << "units = " <<u<<endl;
cout << "unit costs = " <<r <<endl;
cout << "unit rate = " <<r <<endl;
cout << "sales tax = " <<st <<endl;
cout << "total due is = " <<totdue <<endl;
//driver function
}
int main(){
	int u, c, r, st, totdue;
	fun1(u, c, r);
	fun2(u, c, r, st, totdue);
	fun3(u, c, r, st, totdue);
cout << "have a gorgeous and beautiful day" <<endl;
}
