#include<iostream>
using namespace std;
int main()
{
    int n ,evenSum =0,oddSum =0;
    cout << "Enter a number ";
    cin >> n ;

    while (n > 0 )
    {
       char lastDigit = n % 10;
       (lastDigit % 2 == 0 ) ? evenSum += lastDigit : oddSum += lastDigit;
       n /= 10;
    }

    cout << evenSum << " " <<oddSum << endl;

    
}