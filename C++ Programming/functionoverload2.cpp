#include<iostream>

using namespace std;

class demo
{
    public:

        int addition(int a , int b , int c)
        {
            return a + b + c;
        }

        int addition(int a , int b)
        {
            return a + b;
        }

        float addition(float f1 , float f2)
        {
            return f1 + f2;
        }

        float addition(float f1 , int f2)
        {
            return f1 + f2;
        }

        float addition(int f1 , float f2)
        {
            return f1 + f2;
        }
};

int main()
{
    demo obj1;

    int ret = 0;

    ret = obj1.addition(3 , 4, 5);
    cout<<"Addition of 3 integers is "<<ret<<"\n";


    return 0;
}