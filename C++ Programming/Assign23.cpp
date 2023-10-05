#include<iostream>
using namespace std;

class base
{
    private:

    virtual void gun()
    {
        cout<<"Inside gun\n";
    }
};

class derived : public base
{
    public:
        void gun()
        {
            cout<<"Inside gun of derived";
        }
};



int main()
{

    base *p = new derived();

    int ret = 0;
    p -> gun();

    return 0;
}