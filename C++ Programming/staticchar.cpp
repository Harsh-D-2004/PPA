#include<iostream>

using namespace std;

class demo
{
    public:
        int a , b;
        static int x , y;

        demo()
        {
            a = 0;
            b = 0;
        };
};

int demo :: x = 10;
int demo :: y = 20;

int main()
{

    cout<<"The value of x is: "<<demo::x<<"\n";
    cout<<"The value of y is: "<<demo::y<<"\n";

    demo obj1;
    demo obj2;

    cout<<"The value of a in obj1 is "<<obj1.a<<"\n";
    cout<<"The value of b in obj1 is "<<obj1.b<<"\n";

    obj1.a++;

    cout<<"The value of a in obj1 is "<<obj1.a<<"\n";

    cout<<"the value of x in obj1 is "<<obj1.x<<"\n";
    cout<<"the value of x in obj2 is "<<obj2.x<<"\n";

    cout<<"Size of demo class object is: "<<sizeof(obj1)<<"\n";

    return 0;
}