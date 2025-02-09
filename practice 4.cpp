// Factorize a positive integer into prime factors.

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n; 
    cout<<"enter a number: ";
    cin>>n;

    for(int i = 2; i <= sqrt(n); i++ )
    {
        while(n%i == 0 )
        {
            cout<<i;
            n /= i;
        if(n > 1)
        {
            cout<<" x ";
        }
        }
    }

    if (n > 1)
    {
        cout<<n;
    }

    
}