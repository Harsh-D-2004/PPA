#include<iostream>

using namespace std;

class demo
{
    public:

        int a;
        int b;

        demo()
        {
            cout<<"Inside default constructor\n";
            a = 0;
            b = 0;
        }

        demo(int no1 , int no2)
        {
            cout<<"Inside parametrised constructor\n";
            a = no1;
            b = no2;
        }

        demo(demo &ref)
        {
            cout<<"Inside copy constructor\n";
            a = ref.a;
            b = ref.b;
        }

        ~demo()
        {
            cout<<"Inside destructor\n";
        }
        
};

int main()
{

    cout<<"Inside main\n";

    demo obj1;
    cout<<"value of a of obj1 is "<<obj1.a<<"\n";
    cout<<"value of b of obj1 is "<<obj1.b<<"\n";

    demo obj2(11 , 21);
    cout<<"value of a of obj1 is "<<obj2.a<<"\n";
    cout<<"value of b of obj1 is "<<obj2.b<<"\n";

    demo obj3(obj2);
    cout<<"value of a of obj1 is "<<obj3.a<<"\n";
    cout<<"value of b of obj1 is "<<obj3.b<<"\n";

    return 0;
}
