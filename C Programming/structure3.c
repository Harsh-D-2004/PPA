#include<stdio.h>


struct demo3
{
    int i;
    float j;
    double d;
    int *ip;
    float *fp;
};


int main()
{
    struct demo3 obj;
    int n = 90;
    float f = 89.99;


    obj.i = 89;
    obj.ip = &n;
    obj.fp = &f;

    printf("%d\n" , obj.ip);



    return 0;   
}