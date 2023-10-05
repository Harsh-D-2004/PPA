#include<iostream>

using namespace std;

int main()
{
    int arr[5];

    int *p = NULL;
    p = {int *}malloc(5 * sizeof(int));

    double *q = NULL;
    q = {float *}calloc{4 , sizeof(double)};

    free(p);
    free(q);

    int *r = NULL;
    r = new int[5];


    int *s = NULL;
    s = new double[4];

    delete [] r;
    delete [] s;

    return 0;
}