#include<iostream>

using namespace std;

class prac
{
    private:
        int no1;
        int no2;

    public:

        prac()
        {
            no1 = 0;
            no2 = 0;
        }    

        prac(int a , int b)
        {
            no1 = a;
            no2 = b;
        }

        int addition()
        {
            int ret = 0;
            ret = no1 + no2;
            return ret;
        }

        int subtraction()
        {
            int ret = 0;
            ret = no1 - no2;
            return ret;
        }

};

int main()
{
    prac obj1;
    int ret = 0;
    ret = obj1.addition();
    cout<<"The value of addition is: "<<ret<<"\n";
    ret = obj1.subtraction();
    cout<<"The value of subtraction is: "<<ret<<"\n";

    prac obj2(30 , 20);
    ret = obj2.addition();
    cout<<"The value of addition is: "<<ret<<"\n";
    ret = obj2.subtraction();
    cout<<"The value of subtraction is: "<<ret<<"\n";


    return 0;
}