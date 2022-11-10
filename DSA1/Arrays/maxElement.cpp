#include<iostream>
using namespace std;

int max(int *addressOfArray,int n){
   int max = INT16_MIN;
   for(int i = 0; i < n ; i++)
   if(*(addressOfArray + i) > max) 
   max = addressOfArray[i];

   return max;
}

int main()
{
    int arr[] = {12,34,56,23,45};
    cout << max(arr,5);
}