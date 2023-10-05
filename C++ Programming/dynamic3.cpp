#include<iostream>

using namespace std;

class demo
{
    public:
        demo()
        {
            cout<<"Inside default constructor\n";
        }

        demo(int a , int b)
        {
            cout<<"Inside parametrised constructor\n";
        }

        ~demo()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{

    demo obj1;
    demo obj2(23 , 44);

    demo *p = new demo();
    demo *q = new demo(22 , 55);

    delete p;
    delete q;

    return 0;
}