#include<iostream>

using namespace std;

class demo
{
    public:
        int no1 , no2;
        static int x , y;

        demo()
        {
            no1 = 0;
            no2 = 0;
            cout<<"Inside Default constructor\n";
        }

        demo(int a , int b)
        {
            no1 = a;
            no2 = b;
            cout<<"Inside parametrised constructor\n";
        }
};

int demo :: x = 10;
int demo :: y = 20;

int main()
{
    cout<<"The value of x in obj1 is"<<demo::x<<"\n";

    demo obj1;
    demo obj2(11 , 22);

    cout<<"The value of no1 in obj1 is "<<obj1.no1<<"\n";
    cout<<"The value of no2 in obj1 is "<<obj1.no2<<"\n";
    cout<<"The value of y in obj2 is "<<obj2.y<<"\n";


    return 0;
}