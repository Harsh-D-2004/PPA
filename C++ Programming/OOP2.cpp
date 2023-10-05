#include<iostream>

using namespace std;

class demo
{
    public:

        int no1;
        int no2;

        void fun()
        {
            cout<<"Inside fun\n";
        }
};

int main()
{

demo obj1;
obj1.no1 = 90;
obj1.no2 = 78;

cout<<"The value of no1 :"<<obj1.no1<<"\n";

demo obj2;
obj2.fun();



    return 0;
}