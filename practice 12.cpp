// Read a positive integer from the keyboard and check if it is a palindrome (a number that reads the same forwards and backwards) example 123454321 is palindrome
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"enter a digit: ";
    cin>>n;
    int digit, reverse = 0, original = n;
    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if(reverse == original)
    {
        cout<<original<<" is a palindrome";
    }
}