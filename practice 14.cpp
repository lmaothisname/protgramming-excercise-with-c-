// Verify Goldbach-snhirenman's conjecture:"every even natural number greater than 2 can be expressed as the sum of two primes"

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
    cout<<"enter a number n: ";
    cin>>n;
    for(int i = 2 ; i <= n/2 ;i++)
    {
        int j = n - i;
        if(isprime(i) && isprime(j))
        {
            cout<<i<<" + "<<j<<" = "<<n<<endl;
        }
    }
}