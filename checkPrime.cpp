#include<iostream>
using namespace std;
int main()
{  
     int n;
    cout << "Enter a number " << endl;
    cin >> n ;
    bool flag = true;

    if( n ==2 ){
    
    cout << n << " is a prime number" << endl;}

    for(int i = 2 ; i*i <= n ; i++){
        if( n % i == 0 ){
            flag = false;
            cout << n << " is not prime " << endl ;
            break;
        }
    }

    if(flag)
    cout << n << " is a prime number";




}