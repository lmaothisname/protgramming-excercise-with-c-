#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int x[10], count = 0 ,n , sum = 0 , j , k = 0;
    cout<<"enter a binary number:";
    cin>>n;
    while(n>0)
    {
        x[count]=n % 10;
        n=n/10;
        count++;
    }
    for (j = 0 ; j < count ; j++)
    {
        sum = sum + x[j]*pow(2,k);
        k++;
    }
    cout<<"the corrresponding decimal number is: "<<sum;
    return 0;
}