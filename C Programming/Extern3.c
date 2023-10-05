#include<stdio.h>

extern int c;
int a = 22;
int b;

int main()
{
    printf("The value of a is %d\n" , a);
    printf("The value of b is %d\n" , b);
    printf("The value of c is %d\n" , c);

    return 0;
}