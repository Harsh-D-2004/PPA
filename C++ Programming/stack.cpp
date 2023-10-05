#include<iostream>
using namespace std;

int addition(int no1 , int no2)
{
    int ans  = 0;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int a = 10 , b = 20;
    int ret = 0;

    ret  = addition(a , b);

    cout<<"Addition is "<<ret<<"\n";

    return 0;
}