/* Given a natural number N (example 100). Find and display all twin primes whose values do not exceed N ( Twin primes are two consecutive prime numbers that differ by two )*/ 

#include <iostream>
#include <math.h>
using namespace std;

int isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int n;
    cout<<"enter a natural number: ";
    cin>>n;
    for(int i = 2; i <= n - 2 ; i++)
    {
        if(isprime(i) && isprime(i+2))
        {
            cout<<"("<<i<<","<<i+2<<")\n";
        }
    }
}