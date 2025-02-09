/* (Fast exponentiation, informatics olympiad Moscow 1980) given a base 'a' and an exponent 'k', compute a^k with the following conditions: you cannot use the exponentation formula, nor can you use suvccessive k
 multiplications ( because k is extremely large and the primary goal is fast exponentiation) */

#include <iostream>
using namespace std;

long long fastexpo (long long a, long long k)
{
    long long result = 1;
    while (k > 0)
    {
        if(k % 2 == 1)
        {
            result *= a;
        }
        a *= a;
        k /= 2;
    }
    return result;
}

int main ()
{
    long long a, k;
    cout<<"enter a base A: ";
    cin>>a;
    cout<<"Enter an exponent k: ";
    cin>>k;
    cout<<"result = "<<fastexpo(a,k)<<endl;

}