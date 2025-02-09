// Enter a decimal number from the keyboard. print the corresponding roman numeral on the screen.

#include <iostream>
using namespace std;

void converttoroman (int num)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i<= 13; i++)
    {
        while (num >= values[i])
        {
            cout<<symbols[i];
            num -= values[i];
        }
    }
}

int main ()
{
    int num;
    cout<<"enter a decimal number: ";
    cin>>num;

    if(num <= 0 || num > 3999)
    {
        cout<<"Invalid number! please enter a number between 1 and 3999.";
    }
    else
    {
        cout<<"Corresponding roman numeral x: ";
        converttoroman(num);
    }
    return 0;
}