#include<iostream>

using namespace std;

class base
{
    public:
        int a , b;

        void fun()                          //1000
        {
            cout<<"Inside fun of base"<<"\n";
        }

        void gun()                          //2000
        {
            cout<<"Inside gun of base"<<"\n";
        }

        void sun()                          //3000
        {
            cout<<"Inside sun of base"<<"\n";
        }
};

class derived : public base
{
    public:
        int x , y;

        void fun()                          //4000
        {
            cout<<"Inside fun of derived"<<"\n";
        }

        void gun()                          //5000
        {
            cout<<"Inside gun of derived"<<"\n";
        }

        void sun()                          //6000
        {
            cout<<"Inside sun of derived"<<"\n";
        }
};

int main()
{
    // derived dobj;

    // dobj.fun();
    // dobj.gun();
    // dobj.sun();

    base *bp = new base; //no casting
    derived *dp = new derived; //no casting

    base *bp1 = new derived; // upcasting (allowed)
    // derived *dp1 = new base; //downcasting(not allowed)

    return 0;
}