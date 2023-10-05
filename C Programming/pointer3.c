#include<stdio.h>

int subtraction(int n1 , int n2)
{
    int ans = 0;
    ans = n2 -n1;
    return ans;
}


int main()
{

    int v1 = 30 , v2 = 50;
    int ans = 0;

    int(*funcptr)(int , int);

    funcptr = subtraction;

    ans = funcptr(v1 ,  v2);

    printf("%d\n" , ans);


    return 0;
}