#include<iostream>

using namespace std;

class demo
{
    public:

        int a , b;

        demo()
        {
            cout<<"Inside default constructor\n";
        }

        demo(int i , int j)
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
    cout<<"Inside main\n";

    demo obj1;
    demo obj2(11 , 21);

    demo *p = new demo();
    demo *q = new demo(11 ,  21);

    delete p;
    delete q;

    cout<<"End of main\n";

    return 0;
}