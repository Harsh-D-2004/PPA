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

class ppa : public hello
{
    public:

                int i , j;

        ppa()
        {
            cout<<"Inside ppa constructor\n";
            i = 99;
            j = 88;
        }

        ~ppa()
        {
            cout<<"Inside ppa destructor\n";
        }

        void run()
        {
            cout<<"Inside run of ppa"<<"\n";
        }
};

int main()
{
    cout<<"Inside main\n";
    cout<<"Size of demo : "<<sizeof(demo)<<"\n";
    cout<<"Size of hello : "<<sizeof(hello)<<"\n";
    cout<<"Size of ppa : "<<sizeof(ppa)<<"\n";

    ppa pobj;

    pobj.fun();
    pobj.gun();
    pobj.run();

    cout<<pobj.a<<"\n";
    cout<<pobj.b<<"\n";
    cout<<pobj.x<<"\n";
    cout<<pobj.y<<"\n";
    cout<<pobj.i<<"\n";
    cout<<pobj.j<<"\n";

    cout<<"End of main\n";

    return 0;
}