#include<iostream>
using namespace std;

int main() {
 cout << "Enter Two Numbers" << endl;
int a , b;
 cin >> a >> b ;

if( a == b ) 
cout << a << " and " << b << " are same" << endl;
else if ( a <= b ) 
cout << a << " is less than or equal to " << b  << endl ;
else 
cout << a << " is greater than "<<b << endl;
}
