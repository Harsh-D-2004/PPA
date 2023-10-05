#include<iostream>
using namespace std;

class maxi
{
    public:

    int a , b;
    
    maxi(int i , int j)
    {
        a = i;
        b = j;
    }

    nmaxi()
    {
        if(a>b)
        {
            cout<<"The maximum number is "<<a<<"\n";
        }
        else if(b>a)
        {
            cout<<"The maximum number is "<<b<<"\n";
        }
        else
        {
            cout<<"Both value are eqal"<<"\n";
        }
    }

};

int main()
{

    maxi obj(10 , 20);

    obj.nmaxi();


    return 0;
}