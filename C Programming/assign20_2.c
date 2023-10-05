#include<stdlib.h>
#include<stdio.h>

int main()
{

    int icnt = 0;
    int *ptr = NULL;
    int size = 0;

    printf("Enter the value os size ");
    scanf("%d" , &size);

    ptr = (int *)malloc(size * sizeof(int));

    printf("Please enter the elements \n");

    for(icnt = 0 ; icnt<size ; icnt++)
    {
        scanf("%d" , &icnt);
    }

    printf("The elements are \n");

    for(icnt = 0 ; icnt<size ; icnt++)
    {
        scanf("%d" , &icnt);
    }

    free(ptr);


    return 0;
}