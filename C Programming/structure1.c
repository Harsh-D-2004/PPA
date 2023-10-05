#include<stdio.h>

struct s1
 {
     int i;
     float f;
     double d;
 }obj2 , obj3;

int main()
{

    struct s1 obj1;

    obj1.i = 44;
    obj1.f = 76.76;
    obj1.d = 99.9999;


    obj2.i = 22;
    obj2.f = 45.78;
    obj2.d = 44.44444;

    printf("%d\n" , obj1.i);
    printf("%f\n" , obj2.d);

    return 0;
}