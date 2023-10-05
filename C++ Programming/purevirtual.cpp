#include<iostream>

using namespace std;

class base
{
    public:

        int a , b;

        int addition(int i , int j) //1000
        {
            return i + j;
        }

        virtual int subtraction(int i , int j)//2000
        {
            return i - j;
        }

        virtual int multiplication(int i , int j) = 0;
};

class derived : public base
{
    public:
        int a , b;

        int subtraction(int i , int j)//3000
        {
            int ans = 0;
            ans = i - j;
            return ans;
        }

        int multiplication(int i ,  int j)//4000
        {
            return i * j;
        }
};



int main()
{
    // base obj1;
    base *bp = new derived();
    int ret = 0;

    ret = bp -> addition(10 , 11);
    cout<<"Addition is "<<ret<<"\n";

    ret = bp -> subtraction(10 , 11);
    cout<<"Subtraction is "<<ret<<"\n";

    ret = bp -> multiplication(10 , 11);
    cout<<"Multiplication is "<<ret<<"\n";


    return 0;
}