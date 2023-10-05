#include<stdio.h>

struct prac2
{
    int i;
    float f;
};

int main()
{

    struct prac2 arr[4];
    

    arr[0].i = 23;
    arr[0].f = 45.45;

    arr[3].i = 13;
    arr[3].f = 95.45;


    printf("%f\n" , arr[3].f);    


    return 0;
}