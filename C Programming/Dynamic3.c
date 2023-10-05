#include<stdio.h>
#include<stdlib.h>




int main()
{

    int *ptr = NULL;


    ptr = (int *)malloc(sizeof(int) * 5);

    ptr = (int *)realloc(ptr , sizeof(int) * 7);
    ptr = (int *)realloc(ptr , sizeof(int) * 2);



    printf("%d\n" , sizeof(ptr));


    free(ptr);


    return 0;
}