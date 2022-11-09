#include<iostream>
using namespace std;

void printTillN(int n ){
    for(int i =1;i<=n;i++)
    cout << i << " ";
}

int main()
{   int n;
    cin >> n ;
    printTillN(n);
}