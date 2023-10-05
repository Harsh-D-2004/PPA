#include<iostream>

using namespace std;

class demo
{
    public:

        int no1 , no2;

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
            cout<<"Inside fun\n";
            cout<<"Value of no1 is "<<this -> no1<<"\n";
            cout<<"Value of no2 is "<<this -> no2<<"\n";
        }
};

int main()
{

    demo obj1(5 , 6) , obj2(66 , 77);

    obj1.fun(44 , 55);


    return 0;
}