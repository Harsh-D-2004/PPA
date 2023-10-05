#include<iostream>
using namespace std;

class demo
{
    public:
        int x , y;

        demo()
        {
            cout<<"Inside demo constructor\n";
            x = 41;
            y = 31;
        }

        ~demo()
        {
            cout<<"Inside Demo destructor\n";
        }

        void fun()
        {
            cout<<"Inside fun of demo\n";
        }
};

class hello:public demo
{
    public:
        int a , b;

        hello()
        {
            cout<<"Inside hello constructor\n";
            a = 10;
            b = 20;
        }

        ~hello()
        {
            cout<<"Inside hello destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of hello\n";
        }
};

int main()
{
    hello obj2;

    cout<<obj2.x<<"\n";
    cout<<obj2.y<<"\n";
    
    obj2.fun();

    return 0;
}