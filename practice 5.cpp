// Given a positive integer n with more than one digit. Determine the number of digits and compute their sum
// example: input: 9876543
//output: 7 and 42

#include <iostream>
using namespace std;

int main ()
{
    int n, s = 0, count = 0, digit;
    cout<<"Enter a number: ";
    cin>>n;
    while(n > 0)
    {
        digit = n % 10;
        s = s + digit;
        n /= 10;
        count++;
    }
    cout<<"A "<<count<<"-digit number sequence."<<endl;
    cout<<"the total of the digit is: "<<s;
}