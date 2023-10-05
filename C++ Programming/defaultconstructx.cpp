#include<iostream>
using namespace std;

class demo
{
    public:    
        int i , j;
        demo(int a = 10 , int b = 20)
        {
            i = a;
            j = b;
        }
};

int main()
{
    demo obj1; 
    demo obj2(33);
    demo obj3(45 , 54);

    cout<<obj1.i<<"\t"<<obj1.j<<"\n";
    cout<<obj2.i<<"\t"<<obj2.j<<"\n";
    cout<<obj3.i<<"\t"<<obj3.j<<"\n";

    return 0;
}