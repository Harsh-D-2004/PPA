#include<iostream>
using namespace std;

class demo
{
    public:
        inline void fun()
        {
            cout<<"Inside fun"<<"\n";
        }
};

int main()
{
    demo obj;
    obj.fun();

    return 0;
}