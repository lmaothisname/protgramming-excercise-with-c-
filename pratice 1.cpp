#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long long n ,total ;
    cin >> n;
    if ( n > 1)
    {
        total = pow((n * (n + 1))/2,2);
    }
    cout<<total;

}