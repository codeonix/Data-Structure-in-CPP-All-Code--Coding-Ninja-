#include<iostream>
using namespace std;

//function to find factorial of any number n 
int factorial(int n){
    int res = 1;
    for(int i =1;i<=n;i++){
        res *= i;
    }

    return res;
}


int main()
{
   int n,r;
   cout<< "Enter the value of n and r" << endl;
   cin >> n >> r;
   int factN =  factorial(n);
   int factR = factorial(r);
   int factNMinusR = factorial(n-r);

   int res = factN / (factNMinusR*factR);
   cout << res << endl;
}