#include<iostream>

using namespace std;


bool checkeven(int val)
{
    if(val % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{

    int value = 0;
    bool bret = false;

    cout<<"enter number: "<<"\n";
    cin>>value;

    bret = checkeven(value);

    if(bret == true)
    {
        cout<<"it is an even number\n";
    }

    else
    {
        cout<<"it is an odd number\n";
    }


    return 0;
}