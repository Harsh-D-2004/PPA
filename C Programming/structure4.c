#include<stdio.h>

struct prac
{
    int  i;
    float f;
    int arr[4];
};

int main()
{

    struct prac pobj;

    pobj.arr[0] = 23;
    pobj.arr[1] = 24;
    pobj.arr[2] = 56;
    pobj.arr[3] = 78;
    pobj.arr[4] = 89;



    printf("%d\n" , pobj.arr[3]);



    return 0;
}