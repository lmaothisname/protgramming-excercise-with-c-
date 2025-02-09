/* Find the positive integer solutions of the following equations:
 a) 4x +3y - 9z = 5 vvowis x: 0<= x<= 10; */

#include <iostream>
using namespace std;

int main ()
{
    for(int x = 0; x <= 10 ; x++)
    {
        for (int z = 1; z <= 100; z++)
        {
            int y = (5-4*x+9*z)/3;
            if(y>0 && (4*x+3*y-9*z == 5))
            {
                cout<<"nghiem(x,y,z): ("<<x<<","<<y<<","<<z<<")"<<endl;
            }
        }
    }
}