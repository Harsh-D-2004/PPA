#include<iostream>

using namespace std;

class base
{
    public:
        int a , b;

        virtual void fun()                          //1000
        {
            cout<<"Inside fun of base"<<"\n";
        }

        virtual void gun()                          //2000
        {
            cout<<"Inside gun of base"<<"\n";
        }

        virtual void sun()                          //3000
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

        // void gun()                          //5000
        // {
        //     cout<<"Inside gun of derived"<<"\n";
        // }

        virtual void sun()                          //6000
        {
            cout<<"Inside sun of derived"<<"\n";
        }

        virtual void run()                          //7000
        {
            cout<<"Inside sun of derived"<<"\n";
        }
};

int main()
{
    cout<<"size of base class "<<sizeof(base)<<"\n";
    cout<<"size of derived class "<<sizeof(derived)<<"\n";

    base *bp = new derived; // upcasting (allowed)
    // derived *dp = new base;

    bp -> fun();
    bp -> gun();
    bp -> sun();
    // bp -> run();

    return 0;
}