#include<iostream>
using namespace std;

float area(float r , float PI = 3.14f)
{
    float ans = 0.0f;
    ans = PI*r*r;
    return ans;
}

int main()
{
    float a = 0.0f;
    float ret = 0.0f;

    cout<<"Enter the radius "<<"\n";
    cin>>a;

    ret = area(a);
    cout<<"Area of circle is "<<ret<<"\n";

    ret = area(a , 10.17f);
    cout<<"Area of circle is "<<ret<<"\n";

    return 0;
}