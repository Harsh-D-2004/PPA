#include<stdio.h>


struct prac1
{
    int i;
    float f;
};  

struct prac2
{
    int  no;
    float fo;
    struct prac1 obj;
}prac2obj;

int main()
{

    prac2obj.obj.i = 89;

    printf("%d\n" , prac2obj.obj.i);


    return 0;
}