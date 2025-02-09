/*b. s = 1/2^2 + 1/3^2 + 1/ 4^2 + 1/5^2 +...+1/n^2*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    float n, s = 0;
    cout<<"enter a number: ";
    cin>>n;
    for(int i = 2; i <= n; i++)
    {
        s = s + 1/pow(i,2);
    }
    cout<<s;
}