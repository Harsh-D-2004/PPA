#include<stdio.h>


int main()
{

    int cls = 0;

    printf("Enter ur class: ");
    scanf("%d" , &cls);

    switch(cls)
    {

        case 1:
            printf("Ur exam is at 1pm")
            break;

        case 2:
            printf("Ur exam is at 2pm")
            break;    

        case 3:
            printf("Ur exam is at 3pm")
            break;

        case 4:
            printf("Ur exam is at 4pm")
            break;

        default:
            printf("Enter proper values")
            break;    
    }
    


    return 0;

}