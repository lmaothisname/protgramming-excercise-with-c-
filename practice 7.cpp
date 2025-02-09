/* Read a positive integer N from the keyboard(N> 1). Find the largest digit in the entered number and its position in that number.*/

#include <iostream>
using namespace std;

int main ()
{
    int n, digit, position = 0, temp = 0,current= 0 ,maxp = 0, totalp=0;
    cout<<"enter a positive integer (N > 1): ";
    cin>>n;
    int t = n;
    while(t>0)
    {
        totalp++;
        t /= 10;
    }
    while(n > 0)
    {
        digit = n % 10;
        current++;
        if(digit > temp)
        {
            temp = digit;
            maxp = current;
        }
        n /= 10;
    }
    position = totalp - maxp + 1;
    cout<<"the largest digit in the sequence is "<<temp<<endl;
    cout<<"it's position is: "<<position;
}