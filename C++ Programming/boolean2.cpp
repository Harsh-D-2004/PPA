#include<iostream>

using namespace std;

int checkeven(int no)
{
    if(no%2 == 0)
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
    int val = 0;

    cout<<"Enter the value: ";
    cin>>val;

    int ret;

    ret = checkeven(val);

    if(ret == 1)
    {
        cout<<"The number is even\n";
    }

    else
    {
        cout<<"The value is odd\n";
    }

    return 0;
}
