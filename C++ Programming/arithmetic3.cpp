#include<iostream>
using namespace std;

class demo
{
    public:
        int no1 , no2;

        demo(int a , int b)
        {
            no1 = a;
            no2 = b;
        }

        int addition()
        {
            int ret = 0;
            ret = no1 + no2;
            return ret;
        }

        int subtraction()
        {
            int ret = 0;
            ret = no1 - no2;
            return  ret;
        }
};

int main()
{
    demo obj1(10 , 4);
    demo obj2(7 , 5);

    
    int ret = 0;

    ret = obj1.addition();
    cout<<"Addition of obj1 elements is "<<ret<<"\n";

    ret = obj2.subtraction();
    cout<<"Subtraction of obj2 elements is "<<ret<<"\n";


    return 0;
}