#include<stdio.h>
#include<stdlib.h>




int main()
{

    int arr[5];

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array \n");
    scanf("%d\n" , &size);

    ptr = (int *)calloc(sizeof(int) , size);    


    free(ptr);


    return 0;
}