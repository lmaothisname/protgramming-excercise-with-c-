// Find and list all Mersenne numbers less than a give natural number n (where n >= 3). Prime numbers that can be expressed in the form 2^n - 1( where n is a natural number) are called Mersenne numbers

#include <iostream>
#include <math.h>
using namespace std;

int isprime (int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 )
        {
            return false;
        }
    }
    return true;
}

int main ()
{
    int n;
    cout<<"enter a number (n>= 3): ";
    cin>>n;
    for(int i = 2; i < n; i++)
    {
        int mersenne = pow(2,i) - 1;
        if(isprime(mersenne))
        {
            cout<<"M_"<<i<<" = "<<pow(2,i) - 1<<" is mersenne's prime number"<<endl;
        }
    }
}