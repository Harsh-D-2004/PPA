#include<stdio.h>
#include "ppa.h"



int main()
{

    struct demo obj;

    printf("inside main\n");
    printf("The rate of interest is %f\n" , ROI);
    printf("The fees of LB is %d\n" , FEES);
    printf("the size of obj of demo is %d\n" , sizeof(obj)); 

    return 0;
}