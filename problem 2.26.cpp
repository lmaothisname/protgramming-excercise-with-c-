// Create a menu for the restaurant use do.. while
#include <iostream>
using namespace std;

int main ()
{
    int choose;
    do
    {
        cout<<"1/ ca om dua."<<endl;
        cout<<"2/ chim bo cau quay. "<<endl;
        cout<<"3/ Tom hum. "<<endl;
        cout<<"4/ Muc ong nhoi thit chien. "<<endl;
        cout<<"lua chon cua ban (khong chon go 0 hoac 5 de thoat):"<<endl;
        cin>>choose;
        cout<<"ban vua chon muc so: "<<choose<<endl;
    } while (choose >= 1 && choose <= 4);
    cout<<endl;
    
}