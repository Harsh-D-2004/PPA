#include<stdio.h>



int main()
{

    char ch = 'A';
    int i = 90;
    float f = 78.90909;
    double d = 67.4545677;


    char *chp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *v1 = NULL;
    v1 =  &ch;
    printf("%c\n" , *(char*)v1);

    v1 = &d;
    printf("%f\n" , *(double*)v1);
            



    return 0;
}