#include<iostream>
using namespace std;

int main() {
    //a - z : 97 -122 and A-Z : 65-90
    char ch;
    cout << "Enter a character" << endl ;
    cin >> ch ;

    if( ch >= 65 and ch <= 90)
    cout << "upper case " << endl;
    else if ( ch >= 97 && ch <= 122 )
    cout << "lower case ";
    else 
    cout << "other character";
}