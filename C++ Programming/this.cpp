#include<iostream>

using namespace std;

class demo
{
    public:

        int no1;
        int no2;

        demo(int a  , int b)
        {
            no1 = a;
            no2 = b;
        }

        void fun(int a , int b)
        {
            cout<<"Inside fun : "<<this->no1<<"\n";
            cout<<"Inside fun : "<<this->no2<<"\n";
        }

        void gun(int a)
        {
            cout<<"Inside gun : "<<this->no1<<"\n";
            cout<<"Inside gun : "<<this->no2<<"\n";
        }       
};

int main()
{
    demo obj1(11 , 21);
    demo obj2(51 , 101);

    obj1.fun(10 , 20);
    obj2.gun(10);

    return 0;
}