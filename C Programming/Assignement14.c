#include<stdio.h>
#include<math.h>

int max(int i , int j)
{
    if(i>j)
    {
        printf("The  maximum number is %d" , i);
    }

    else if(i<j)
    {
        printf("The maximum value is %d" , j);
    }

    else
    {
        printf("Both the numbers are eqal");
    }
}


int main()
{
int a = 0;
int b = 0;

printf("Enter the first number");
scanf("%d" , &a);

printf("Enter the second number");
scanf("%d" , &b);

int ret = max(a , b);


    return 0;
}