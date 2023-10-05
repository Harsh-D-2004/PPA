#include<iostream>

using namespace std;

class demo
{
    public:

        int x , y;
        static int a , b;

        demo()
        {
            x = 0;
            y = 0;
        }

        void fun()
        {
            cout<<"Inside fun\n";
            cout<<"Value of x is "<<this -> x<<"\n";
            cout<<"Value of y is "<<this -> y<<"\n";
            cout<<"Value of a is "<<a<<"\n";
            cout<<"Value of b is "<<b<<"\n";
        }

        static void gun()
        {
            cout<<"Inside static function gun "<<"\n";
            cout<<"Value of a is "<<a<<"\n";
            cout<<"Value of b is "<<b<<"\n";
        }
};

int demo::a = 0;
int demo::b = 0;

int main()
{
    demo :: gun();
    demo obj1;

    obj1.fun();
    obj1.gun();

    return 0;
}