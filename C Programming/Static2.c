#include<stdio.h>

void demo()
{
    static int no = 11;
    no ++;
    printf("The value of no is %d\n" , no);
}

int main()
{
    demo();
    demo();
    demo();
    
    return 0;
}