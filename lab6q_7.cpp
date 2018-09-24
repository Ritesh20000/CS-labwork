#include <iostream>
using namespace std;
//write function LOWER
char LOWER( int k, char b, int d)
    { k=d + 32; b = (char)k;
     cout <<"the lowercase version is "<<b<<endl;
    return b; }

 //function UPPER
char UPPER( int r, char s, int d){
    r = d - 32;
     s = (char)r;
     cout <<"the uppercase version is "<<s<<endl;
return s;
    }
//driver function
 int main(){ 
    int d , f, i, k, t, b, p, q, r, s;
     char ll;
     cout <<"please enter the letter"<<endl;
     cin >>ll;
     d = (int)ll;
     if (d > 96){ UPPER(r, s, d);} else if (d > 65 && d < 90) LOWER(k, b, d); return 0; } 