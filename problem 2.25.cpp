#include <iostream>
using namespace std;

int main ()
{
    int divisor, dividend, quotient, remain;
    do
    {
        cout<<"enter the dividend: ";
        cin>>dividend;
        cout<<"enter the divisor: ";
        cin>>divisor;
        quotient = 0;
    }
     while (divisor <= dividend)
        dividend = dividend - divisor;
        quotient++;
     remain = dividend;
     cout<<"quotient = "<<quotient<<endl;
     cout<<"remaining = "<<remain<<endl;
    
    
}