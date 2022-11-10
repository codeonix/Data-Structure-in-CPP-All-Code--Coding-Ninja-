//An element is said to be peak element if it is not smaller than it's adjacent elements if exits.

#include<iostream>
using namespace std;

//finding peak element from an array
int peakElement(int *ptr, int n){
  //here ptr is pointing to the initial or starting address of array 
   if(n==0)
   return 0;
   

   for(int i =0; i<n ; i++){
    if( i ==0 && *(ptr + i) >= *(ptr + i +1))
    return *(ptr+i);
     else if ( i == n-1 && *(ptr+i) >= *(ptr+i-1))
     return *(ptr+i);
     else{
        if(*(ptr+i) >= *(ptr+i-1) && *(ptr+i) >= *(ptr+i+1) )
        return *(ptr+i);
     }
   }

   return 0;
}

int main()
{
    int arr[] = {1,2,3};
    cout << peakElement(arr,3) << endl;
    
}