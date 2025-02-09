/* (non-recursion)find the greatest common divisor of two positive integer number entered from the keyboard(using euclidean algorithm)
by two methods repeated subtractions and repeated division*/

//method 1: repeated subtraction
#include <iostream>
using namespace std;

int main ()
{
    int a, b;
    cout<<"enter two positive integer:";
    cin>>a>>b;
    while (a-b)
    {
        if(a > b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    cout<<"the greatest common factor = "<<b;
    cout<<endl;
}
