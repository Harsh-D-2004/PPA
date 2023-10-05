#include<stdio.h>

struct demo2
{
    int i;
    float f;
    double d;
};

int main()
{

    struct demo2 obj;

    struct demo2 *ptr = &obj;


    ptr -> i = 45;
    ptr -> f = 488.88;
    ptr -> d = 33.3333;


    printf()"%d\n


    return 0;
}