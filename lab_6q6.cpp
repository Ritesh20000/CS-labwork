#include <iostream>
#include <math.h>
using namespace std;
//user def func for sumeven
int sumEvenNumbers(int firstNum, int secondNum){
int sum=0;
for(int n=firstNum; n<secondNum; n++)
{
if(n%2==0){
sum+=n;
}
}
return sum;
}
//userdef func for odd no.s
int sumOddNumbers(int firstNum, int secondNum){
int sum=0;
for(int n=firstNum; n<secondNum; n++){
if(n%2!=0){
sum+=n;
}
}
return sum;
}
//user def func for sum sq even
int sumSquareEvenNumbers(int firstNum, int secondNum){
int sum=0;
int n=firstNum;
while(n<secondNum){
if(n%2==0){
sum+= pow(n, 2);
}
n++;
}
return sum;
}
//user def for odd sq sum
int sumSquareOddNumbers(int firstNum, int secondNum){
int sum=0;
int n=firstNum;
while(n<secondNum){
if(n%2 != 0){
sum+= pow(n, 2);
}
n++;
}
return sum;
}
//driver func
int main(){
int a, b;
cout <<"enter the two numbers"<<endl;
cin >>a;
cin >>b;
int sumEven = sumEvenNumbers(a, b);
int sumOdd = sumOddNumbers(a, b);
int sumSquareEven = sumSquareEvenNumbers(a, b);
int sumSquareOdd = sumSquareOddNumbers(a, b);

cout <<"the sum of even numbers is "<<sumEven<<endl <<"the sum of odd numbers js "<<sumOdd<< endl << "the sum of square of even numbers is "<< sumSquareEven <<endl << "the sum of square of odd numbers is "<<sumSquareOdd <<endl;
return 0;
}