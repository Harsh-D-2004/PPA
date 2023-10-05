#include<stdio.h>

int addition(int a , int b){

    int result;

    result = a + b;

    return result;
}


int main(){

    int no1 = 3;
    int no2 = 4;
    int ans = 0;

    ans = addition(no1 , no2);

    printf("%d" , ans);


    return 0;
}