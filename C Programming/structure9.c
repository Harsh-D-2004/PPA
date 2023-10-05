#include<stdio.h>

#pragma pack(1)

struct demo
{
    int i;
    char ch;
    float f;
    double d;
}obj1;

int main()
{

    printf("%d\n" , sizeof(obj1));

    return 0;
}