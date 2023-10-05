#include<iostream>
using namespace std;

class demo
{
    public:
        int a , b;

        demo()
        {
            cout<<"Inside demo constructor\n";
            a = 11;
            b = 21;
        }

        ~demo()
        {
            cout<<"Inside demo destructor\n";
        }

        void fun()
        {
            cout<<"Inside fun of demo\n";
        }
};

class hello : public demo     //class hello extends demo
{
    public:
        int x , y;

        hello()
        {
            cout<<"Inside Hello constructor\n";
            x = 51;
            y = 101;
        }

        ~hello()
        {
            cout<<"Inside hello destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of hello"<<"\n";
        }
};

int main()
{
    hello hobj;
    hobj.fun();
    hobj.gun();

    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";

    return 0;
}