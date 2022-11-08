#include<iostream>
using namespace std;
int main()
{
    int base , power , res = 1;
    cout << "Enter base and power respectively"<< endl;
    cin >> base >> power ;

    for(int i =1; i<= power ; i++){
        res = res * base;
    }

    cout << res  << endl;
}