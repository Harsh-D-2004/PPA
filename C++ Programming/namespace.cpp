#include<iostream>
using namespace std;

namespace marvellous
{
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
}

namespace infosystems
{
    class demo
    {
        public:    
            int a , b;
    };
}

// using namespace marvellous;

int main()
{
    marvellous::demo obj1;
    // demo obj;

    infosystems::demo obj2;

    // std::cout<<"Inside main"<<"\n";
    cout<<"Inside main"<<"\n";

    return 0;
}