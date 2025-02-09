//method 2: repeated divisor

#include <iostream>
using namespace std;

int main ()
{
    int a, b, remainder;
    cout<<"Enter two positive integer number: ";
    cin>>a>>b;
    while(b != 0)
    {
        remainder = a % b;
        a=b;
        b=remainder;
    }
    cout<<"the greatest common divisor is = "<<a;
}