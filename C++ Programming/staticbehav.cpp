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
        }

        void fun()
        {
            cout<<"Inside non static function fun"<<"\n";
            cout<<"Value of a "<<this -> a<<"\n";
            cout<<"Value of b "<<this -> b<<"\n";
            cout<<"Value of x "<<x<<"\n";
            cout<<"Value of y "<<y<<"\n";
        }

        static void gun()
        {
            cout<<"Inside static function gun"<<"\n";
            cout<<"Value of x "<<x<<"\n";
            cout<<"Value of y "<<y<<"\n";
        }
};

int demo :: x = 10;
int demo :: y = 20;

int main()
{
    demo::gun();

    demo obj1;
    obj1.fun();
    obj1.gun();

    return 0;
}