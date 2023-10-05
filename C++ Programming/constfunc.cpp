#include<iostream>
using namespace std;

class demo
{
    public:
        int a;
        int b;
        const int c;
        const int d;

        demo() : c(11) , d(21)
        {
            a = 0;
            b = 0;
        }

        demo(int i , int j , int k , int l) : c(k) , d(l)
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

        void gun() const
        {   
            a++;
            b++;
            // c++;
            // d++;
        }
};

int main()
{
    demo obj1(11 , 21 ,  51 , 101);
    const demo obj2(11 , 21 , 51 , 101);

    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();
    
    return 0;
}