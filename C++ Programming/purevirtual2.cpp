#include<iostream>
using namespace std;

class base
{
    public:
        int a , b;

        int addition(int i , int j)
        {
            return i + j;
        }

        virtual int subtraction(int i , int j)
        {
            return i - j;
        }

        virtual int multiplication(int i , int j) = 0;
};

class derived : public base
{
    public:
        int x , y;

        virtual int subtraction(int i , int j)
        {
            int ans = 0;
            ans = i - j;
            return ans;
        }

        int multiplication(int i , int j)
        {
            return i*j;
        }
};

int main()
{
    base *bp = new derived;
    int ret = 0;

    ret = bp -> addition(1 , 2);
    cout<<"Addition is "<<ret<<"\n";

    ret = bp -> subtraction(100 , 2);
    cout<<"Subtraction is "<<ret<<"\n";

    ret = bp -> multiplication(11 , 22);
    cout<<"Multiplication is "<<ret<<"\n";

    return 0;
}