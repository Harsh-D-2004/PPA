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

        void fun()
        {
            a++;
            b++;
            // c++;
            // d++;
        }

        void gun()const
        {
            // a++;
            // b++;
            // c++;
            // d++;
        }
};

int main()
{

demo obj1;
const demo obj2(11 , 22 , 33 , 44);

obj1.fun();
obj1.gun();

// obj2.fun();
obj2.gun();

return 0;
}