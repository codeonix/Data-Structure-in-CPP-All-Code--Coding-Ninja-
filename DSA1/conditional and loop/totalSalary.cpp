#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int basic,allow;
     float totalSalary ;
      char grade;
    cin >> basic >> grade;

    if(grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else
        allow = 1300;
    
    totalSalary = basic + 0.20 * basic + 0.50 * basic + allow - 0.11 * basic;
    cout << round(totalSalary );
     	
}
