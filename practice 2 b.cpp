//x^2+y^2 = n with n is a natural number read from the keyboard

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    bool  found = false;

    for (int x  = 1; x <= sqrt(n); x++)
    {
        int y_squared =n - x*x;
        int y = sqrt(y_squared);
        if(y*y == y_squared && y >0)
        {
            cout<<"solution (x,y) = ("<<x<<","<<y<<")"<<endl;
            found = true;
        }
    }
    if(!found)
    {
        cout<<"there are no positive integer solutions for x^2 + y^2 = "<<n<<endl;
    }
}