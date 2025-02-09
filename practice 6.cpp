// non-recursive, reverse a positivie integer with more than one digit.

#include <iostream>
using namespace std;

int main ()
{
    int n, digit, reverse = 0;
    cout<<"enter a digit: ";
    cin>>n;
    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    cout<<"the digit after reverse: "<<reverse;
}