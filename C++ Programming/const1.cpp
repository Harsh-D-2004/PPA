#include<iostream>
using namespace std;

class demo
{
    public:

        int a , b;
        const int i , j;

        demo(): i(20) , j(30)
        {
            a = 0;
            b = 0;
        }

        demo(int i , int j , int k , int l): i(k) , j(l)
        {
            a = i;
            b = j;
        } 
};

int main()
{

demo obj1;
demo obj2(11 , 22 , 33 , 44);

cout<<obj1.a<<"\n";
cout<<obj1.b<<"\n";
cout<<obj1.i<<"\n";
cout<<obj1.j<<"\n";

cout<<obj2.a<<"\n";
cout<<obj2.b<<"\n";
cout<<obj2.i<<"\n";
cout<<obj2.j<<"\n";

    return 0;
}