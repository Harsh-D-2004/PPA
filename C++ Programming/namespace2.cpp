#include<iostream>
using namespace std;

namespace marvellous
{
    class demo
    {
        public:
            int a , b;
            demo(int i =10 , int j = 20)
            {
                a = i;
                b = j;            }
    };
}

namespace infosystems
{
    class demo
    {
        int a ;
    };
}

using namespace marvellous;

int main()
{
    demo obj1(10 , 20);

    cout<<obj1.a<<"\n";
    cout<<obj1.a<<"\n";

    return 0;
}