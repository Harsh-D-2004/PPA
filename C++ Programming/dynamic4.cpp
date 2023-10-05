#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
    int arr[5];

    int *a = NULL;
    a = (int *)malloc(5 * sizeof(int));

    int *b = NULL;
    b = (int *)calloc(5 , sizeof(int));

    double *x = NULL;
    x = new double[5];

    // cout<<"The size of x is "<<sizeof(a)<<"\n";

    free(a);
    free(b);

    delete [] x;

    return 0;
}