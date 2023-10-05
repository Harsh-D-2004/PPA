#include<stdio.h>

struct prac1
{
    int no;
    float fo;
    struct prac2
    {
        int i;
        float f;
    }p1,p2;
}d1;

int main()
{

    d1.p1.i = 89;
    d1.p2.f = 78.78;

    printf("%d\n" , d1.p1.i);
    printf("%f\n" , d1.p2.f);



    return 0;
}