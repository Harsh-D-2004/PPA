#include<iostream>

using namespace std;

class base
{
    public:
        int a;
    private:
        int b;
    protected:
        int c;

    public:
        base()
        {
            a = 10;
            b = 20;
            c = 30;
        }            
};

class derived : public base
{
    public:
        int x;
        void dispay()
        {
            cout<<a<<"\n";                                
            cout<<b<<"\n";      
            cout<<c<<"\n";
        }
};

int main
{
    derived dobj;
    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";
    cout<<dobj.c<<"\n";
    cout<<dobj.x<<"\n";

    return 0;
}