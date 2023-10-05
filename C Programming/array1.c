#include<stdio.h>

int main()
{

    int arr[5] = {10 , 20 , 30 , 40 , 50};

    printf("%d\n" , arr[2]);

    int arr2[4];
    arr2[0] = 23;
    arr2[1] = 34;
    arr2[2] = 67;
    arr2[3] = 78;


    printf("%d\n" , arr2[3]);


    printf("size of arr is %d\n" , sizeof(arr[3]));


    return 0;
}