#include<iostream>
using namespace std;
int main()
{
    int n ,evenSum =0,oddSum =0;
    cout << "Enter a number" << endl;
    cin >> n ;
    for(int i =2; i <= n ; i ++){
        if( n % i == 0)
        {
            evenSum += i;
        }
        else 
        {
            oddSum += i;
        }
    }

    cout << "Even Sum : "<< evenSum << " and Odd Sum : " << oddSum << endl ;
}