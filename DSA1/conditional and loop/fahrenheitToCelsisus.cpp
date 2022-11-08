#include<iostream>
using namespace std;
int main()
{
    int start,end,gap,celsius;
    cout << "Enter start , end and gap value in Fahrenheit" << endl;
    cin >> start >> end >> gap ;
    for(int i =start ; i <=end ; i+=gap ){
        celsius = (5/9.0) * ( i - 32);
        cout << i << "\t" << celsius << endl; 
    }
}