/* Using a non-recursive algorithm, reverse the digits of a positive integer with more than one digit.(restrict: no use data string, or array) */

#include <iostream>
using namespace std;

int main ()
{
    int n, reverse = 0;
    cout<<"enter the digit: ";
    cin>>n;
    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    cout<<"the digit after reverse: "<<reverse;
}