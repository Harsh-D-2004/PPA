#include<stdio.h>
#include<stdlib.h>

struct hello
{
    float f;
    int i;
};

int main()
{

    struct hello obj1;

    struct hello *ptr = NULL;
    ptr = (struct hello*)malloc(sizeof(obj1) * 5);

    free(ptr);    

    return 0;
}