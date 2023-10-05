#include<stdio.h>


void name(){

    static int no = 23;
    no++;
    printf("%d\n" , no);
}


int main()
{

    name();
    name();
    name();

    return 0;

}