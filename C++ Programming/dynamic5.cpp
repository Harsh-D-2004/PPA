#include<iostream>

using namespace std;

class demo
{
    public:

        int a , b;
        
        demo()
        {
            cout<<"Inside default constructor"<<"\n";
        }

        demo(int a , int b)
        {
            cout<<"Inside parametrised constructor"<<"\n";
        }

        ~demo()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{
    demo obj1 , obj2(77 , 88);

    demo *p = new demo();
    demo *q = new demo(22 , 33);

    cout<<sizeof(*p)<<"\n";

    delete p;
    delete q;

    return 0;
}