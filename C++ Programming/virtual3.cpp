#include<iostream>
using namespace std;

class base
{
    public:

        virtual void fun()
        {
            cout<<"Inside Fun of base\n";
        }

        virtual void gun()
        {
            cout<<"Inside gun of base\n";
        }

        virtual void sun()
        {
            cout<<"Inside sun of base\n";
        }
};

class derived : public base
{
    public:

         void fun()
        {
            cout<<"Inside Fun of derived\n";
        }

        virtual void sun()
        {
            cout<<"Inside sun of derived\n";
        }

        virtual void run()
        {
            cout<<"Inside sun of derived\n";
        }
};

int main()
{
    base *bp = new derived;

    bp -> fun();
    bp -> gun();
    bp -> sun();
    // bp -> run();

    return 0;
}