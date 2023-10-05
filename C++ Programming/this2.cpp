#include<iostream>

using namespace std;

class demo
{
    public:

        int no1;
        int no2;

        demo()
        {
            no1 = 0;
            no2 = 0;
        }

        demo(int a , int b)
        {
            no1 = a;
            no2 = b;
        }

        void fun(int a , int b)
        {
            cout<<"Inside fun "<<this -> no1<<"\n";
            cout<<"Inside fun "<<this -> no2<<"\n";
            cout<<"Inside fun "<<a<<"\n";
            cout<<"Inside fun "<<b<<"\n";
        }

        void gun(int a)
        {
            cout<<"Inside gun "<<this -> no1<<"\n";
            cout<<"Inside gun "<<this -> no2<<"\n";
            cout<<"Inside gun "<<a<<"\n";
        }
};

int main()
{
    demo obj1;
    demo obj2(2 , 3);

    obj1.fun(20 , 30);
    obj1.gun(44);

    obj2.fun(44 , 55);
    obj2.gun(56);

    return 0;
}