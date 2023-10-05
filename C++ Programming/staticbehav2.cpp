#include<iostream>

using namespace std;

class demo
{

    public:

        int no1 ,no2;
        static int x , y;

        demo()
        {
            no1 = 0;
            no2 = 0;
        }

        void fun()
        {
            cout<<"Inside fun\n";
            cout<<"The value of no1 "<<this -> no1<<"\n";
            cout<<"The value of no2 "<<this -> no2<<"\n";
        }
}

int main()
{


    return 0;
}