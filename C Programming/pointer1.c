#include<stdio.h>


int main()
{   

    int no = 23;
    int *p = &no;

    // printf("%d\n" , *p);
    // printf("%d\n" , &no);
    // printf("%d\n" , &p);
    // printf("%d\n" , no);

    int no2 = 11;
    int *a = &no2;
    int **b = &a;
    int ***c = &b;
    int ****d = &c;

    // printf("%d\n" , **b);
    // printf("%d\n" , ***c);
    // printf("%d\n" , **c);
    // printf("%d\n" , &no2);
    // printf("%d\n" , &a);


    int arr[5] = {11 , 22 , 33 , 44};

    int *v = &arr[3];

    // printf("%d\n" , *v);
    // printf("%d\n" , arr[4]);

    


    return 0;
}
