#include<stdio.h>


int main()
{

    int age = 0;

    printf("Enter ur age");
    scanf("%d" , &age);

    if(age<=18)
    {
        printf("U are not eligible for driving");
    }

    else if(70<age>18){

        printf("U are eligible for driving");
    }

    else if(age>=70)
    {
        printf("U are not eleigible for driving");
    }

    else{
        printf("Wrong character");
    }


    return 0;

}