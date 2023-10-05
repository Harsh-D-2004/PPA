#include<iostream>

using namespace std;

class demo
{

    public:

        int addition(int no1 , int no2)
        {
            cout<<"Addition of 2 integers "<<"\n";
            return no1 + no2;
        }

        int addition(int no1 , int no2 , int no3)
        {
            cout<<"Addition of 3 integers "<<"\n";
            return no1 + no2 + no3;
        }

        float addition(float f1 , float f2)
        {
            cout<<"Addition of 2 floats"<<"\n";
            return f1 + f2;
        }

        double addition(double d1 , double d2)
        {
            cout<<"Addition of 2 floats"<<"\n";
            return d1 + d2;
        }
};

int main()
{

    demo obj;
    int iret = obj.addition(10 , 11);
    cout<<"Addition of integers is : "<<iret<<"\n";

    iret = obj.addition(10 , 11 , 20);
    cout<<"Addition of 3 integers is : "<<iret<<"\n";

    float fret = obj.addition(10.9f , 11.77f);
    cout<<"Addition of floats is : "<<fret<<"\n";

    double dret = obj.addition (10.5 , 11.77);
    cout<<"Addition of doubles is : "<<dret<<"\n";

    return 0;
}