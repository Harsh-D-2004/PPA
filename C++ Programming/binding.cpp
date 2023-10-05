#include<iostream>

using namespace std;

class demo
{
    public:

        void fun()  //1000 from text section
        {
            cout<<"Inside fun\n";
        }

        void gun()  //2000 from text section
        {
            cout<<"Inside gun\n";
        }
};

int main()
{
    demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.fun(); //call 1000
    obj.gun(); //call 2000

    return 0;
}