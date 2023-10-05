#include<iostream>
using namespace std;

float area(float radius , float PI = 3.14f)
{
    float ans  = 0.0f;
    ans = PI*radius*radius;
    return ans;
}

int main()
{
    float r = 0.0f;
    float fret = 0.0f;

    cout<<"Enter the radius "<<"\n";
    cin>>r;

    fret = area(r);
    cout<<"Area of circle is "<<fret<<"\n";

    fret = area(r , 7.10f);
    cout<<"Area of circle is "<<fret<<"\n";

    return 0;
}
