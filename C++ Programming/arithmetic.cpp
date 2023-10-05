#include<iostream>

using namespace std;

class arithmetic
{
    private:
        int no1;
        int no2;

    public:
        arithmetic()
        {
            no1 = 0;
            no2 = 0;
        }

        arithmetic(int a , int b)
        {
            no1 = a;
            no2 = b;
        }

        int addition()
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }

        int subtraction()
        {
            int ans = 0;
            ans = no1 - no2;
            return ans;
        }        
};

int main()
{
    arithmetic obj1(10 , 7);
    arithmetic obj2;

    int ret = 0;

    ret = obj1.addition();
    cout<<"Addition is: "<<ret<<"\n";
    ret = obj1.subtraction();
    cout<<"Subtraction is: "<<ret<<"\n";

    ret = obj2.addition();
    cout<<"Addition is: "<<ret<<"\n";
    ret = obj2.subtraction();
    cout<<"Subtraction is: "<<ret<<"\n";

    // cout<<"Value of no1: "<<obj1.no1<<"\n"; error


    return 0;
}