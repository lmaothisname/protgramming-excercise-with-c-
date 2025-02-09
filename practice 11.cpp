/*(Euler's totient function(n)) givien a natural number n (Euler's totient function(n) is a function that counts all natural number less than n that are relatively prime to n) calculate Eul(n)*/
#include <iostream>
using namespace std;

int gcd (int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int eulerphi (int n)
{
    int result = 1;
    for (int i = 2; i < n ;i++)
    {
        if (gcd(i,n) ==1)
        {
            result++;
        }
    }
    return result;
}

int main ()
{
    int n;
    cout<<"enter a number n: ";
    cin>>n;
    cout<<"phi("<<n<<") = "<<eulerphi(n)<<endl;
    return 0;
}