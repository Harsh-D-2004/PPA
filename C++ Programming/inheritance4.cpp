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

class ppa:public hello
{
    public:
        int i , j;

        ppa()
        {
            cout<<"Inside ppa constructor\n";
            i = 101;
            j - 404;
        }

        ~ppa()
        {
            cout<<"Inside ppa destructor\n";
        }

        void sun()
        {
            cout<<"Inside sun of ppa\n";
        }
};

int main()
{
    cout<<"Size of demo "<<sizeof(demo)<<"\n";
    cout<<"Size of hello "<<sizeof(hello)<<"\n";
    cout<<"Size of ppa "<<sizeof(ppa)<<"\n";

    ppa obj1;

    obj1.fun();
    obj1.gun();

    cout<<obj1.x<<"\n";
    cout<<obj1.y<<"\n";
    cout<<obj1.a<<"\n";
    cout<<obj1.b<<"\n";
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";

    return 0;
}