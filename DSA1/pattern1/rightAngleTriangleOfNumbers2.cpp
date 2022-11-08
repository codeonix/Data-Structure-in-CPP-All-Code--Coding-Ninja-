#include<iostream>
using namespace std;
int main()
{
    int n ,counter = 1;
    cout << "Enter a number" << endl;
    cin >> n ;
    
    for(int i =1; i<=n ; i++){
        for(int j=1;j <=i ; j++){
         cout << counter  << " ";
         counter ++;
        }
        cout << endl ;
    }
}