#include<iostream>
using namespace std;
int main()
{
    int n, counter =1 ;
    cout << "Enter a number" << endl;
    cin >> n ;

    for(int i =1; i<=n ; i++){
        //for spaces 
        for(int j =1 ; j<=n-i; j++){
            cout << " ";
        }
        //for numbers 
        for(int k =1 ; k<=i; k++){
            cout << counter ;
            counter++;
        }
        cout << endl ;
    }
}