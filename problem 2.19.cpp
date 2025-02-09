//approximate the value of the sin(x) function with an error of 10^-6 using recursive approximation formula: sin(x) approximately equal to x^3/(n*(n+1))
#include <iostream>
#include <math.h>
using namespace std;

int main () 
{
    float x, s, t;
    int n;
    cout<<"provide the value of x (unit radian):";
    cin>>x;
    s=x;
    t=x;
    n=0;
    while(abs(t)>= 0.000001)
    {
        n=n+2;
        t = -t*(x*x) / (n*(n+1));
        s=s+t;
    }
    cout<<"sin(x) = "<<ceil(s);
}