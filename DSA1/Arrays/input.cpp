#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int arr[n];
    //taking input 
    for(int i =0;i<n;i++)
    cin >> arr[i];

    //printing array :
    for(int i : arr)
    cout << i << " " ;
}