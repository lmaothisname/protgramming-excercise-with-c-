//s=-1+1/2!-1/3!+1/4!-...+(-1)^k/n!

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int k;
    float n=1, s=0, temp , sp = -1;
    cout<<"enter a number: ";
    cin>>k;
    for (int i = 1; i <= k; i++)
    {
        n *= i;
        temp =1/n;
        s= s + temp  * sp;
        sp = sp * -1;
    }
    cout<<"sum of elements = "<<s;
}