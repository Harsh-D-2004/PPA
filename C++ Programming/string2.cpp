#include<iostream>
using namespace std;

int strlenx(char str[])
{
    int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
    }
    return icnt;

}

int main()
{
    char arr[10];
    int iret = 0;

    cout<<"Enter your first name "<<"\n";
    cin>>arr;

    iret = strlenx(arr);

    cout<<"The lenght of name is "<<iret<<"\n";

    return 0;
}