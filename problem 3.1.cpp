//display a list of prime numbers below 2000

#include <iostream>
#include <iomanip>
using namespace std;

int check (int a)
{
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main ()
{
    cout<<"\t\t\t TABLE OF PRIME NUMBERS < 2000: \n\n";
    for(int i = 2; i < 2000; i++)
    {
        if(check(i))
        {
            cout<<setw(5)<<i;
        }
    }
}