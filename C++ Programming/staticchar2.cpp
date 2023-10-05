#include<iostream>

using namespace std;

class prac
{
    public:
         int no1 , no2;
         static int x , y;

         prac()
         {
            no1 = 0;
            no2 = 0;
            cout<<"inside default constructor\n";
         }

         ~prac()
         {
            cout<<"inside destructor/n";
         }
};

int prac::x = 0;
int prac::y = 0;

int main()
{
    cout<<"The value of y in obj1"<<prac::y<<"\n";

    prac obj1;

    cout<<"The value of x in obj1"<<obj1.x<<"\n";
    cout<<"The value of no1 in obj1"<<obj1.no1<<"\n";
    cout<<"The value of no2 in obj1"<<obj1.no2<<"\n";

    obj1.no1++;

    cout<<"the value of no1 in obj1 is "<<obj1.no1<<"\n";

    cout<<"The size of obj1 is "<<sizeof(obj1)<<"\n";


    return 0;
}