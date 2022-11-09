#include<iostream>
using namespace std;

bool isPrime(int n){
    bool flag = true;
    for(int i=2;i*i <=n ; i++){
        if(n % i == 0){
            flag = false;
            break;
        }
    }

    return flag;
    
}


int main()
{
    int n ;
    cout << "Enter a number" << endl;
    cin >>n ;
    if(isPrime(n))
    cout << "Prime" << endl;
    else
    cout << "Not Prime" << endl;
}