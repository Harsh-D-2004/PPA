#include<stdio.h>

struct prac
{
    int i;
    struct prac *ptr
}obj1 , obj2 , obj3;

int main()
{

    struct prac1 *head;

    obj1.i = 11;
    obj2.i = 21;
    obj3.i = 31;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = NULL;

    head = &obj1;


    printf("%d\n" , obj2.ptr);

    return 0;
}