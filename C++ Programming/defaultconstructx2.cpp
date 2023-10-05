#include<iostream>
using namespace std;

class demo
{
    public:
        int a , b;

        demo(int i = 10 , int j =20)
        {
            a = i;
            b = j;
        }
};

int main()
{
    demo obj1(11 ,22);
    cout<<obj1.a<<"\n";
    cout<<obj1.b<<"\n";

    return 0;
}