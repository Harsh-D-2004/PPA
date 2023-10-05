#include<iostream.h>
using namespace std;

class <template T>
T Addition(T i , T j)
{
    T result = 0;
    result = i + j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;

    i = Addition(11 , 21)
    cout<<"Addition is : "<<i<<"\n";

    f = Addition(11.6f , 21.3f)
    cout<<"Addition is : "<<f<<"\n";

    d = Addition(11.89 , 21.34)
    cout<<"Addition is : "<<d<<"\n";


    return 0;
}