#include<iostream>

using namespace std;

class demo
{
    public:
        int no1;
        int no2;

        demo() //default constructor
        {
            cout<<"Inside constructor\n";
            no1 = 0;
            no2 = 0;            
        }

        demo(int a , int b) //parametrised constructor
        {
            cout<<"Inside parametrised constructor\n";
            no1 = a;
            no2 = b;
        }

        demo(demo &ref) //copy constructor
        {
            cout<<"Inside copy constructor\n";
            no1 = ref.no1;
            no2 = ref.no2;
        }

        ~demo() //destructor
        {
            cout<<"Inside destructor\n";
        }

        void fun()
        {
            cout<<"inside fun\n";
        }

        void gun()
        {
            cout<<"inside gun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    // obj1.fun();
    // obj1.gun();

    demo obj1;
    cout<<"Value of no1 from obj1 is "<<obj1.no1<<"\n";
    cout<<"Value of no2 from obj1 is "<<obj1.no2<<"\n";

    demo obj2(11 , 21);
    cout<<"Value of no1 from obj2 is "<<obj2.no1<<"\n";
    cout<<"Value of no2 from obj2 is "<<obj2.no2<<"\n";

    demo obj3(obj2);
    cout<<"Value of no1 from obj3 is "<<obj3.no1<<"\n";
    cout<<"Value of no2 from obj3 is "<<obj3.no2<<"\n";

    return 0;
}