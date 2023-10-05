#include<stdio.h>

extern int i;
extern int j;
extern int arr[4];


void gun();


int main()
{

    printf("The value of i is %d\n" , i);
    printf("The value of j is %d\n" , j);

    j = 51;
    printf("The value of j is %d\n" , j);
    printf("The value of  0th  element of array is\n" , arr[0]);

    // fun(); //Error- implicit declaration
    gun();

    return 0;
}    

int i = 51;

void gun()
{
    printf("Inside gun\n");
}