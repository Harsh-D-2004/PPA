#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()     
{
    char Name[30];
    int FD = 0;

    printf("Enter the name of file u want to open: \n");
    scanf("%s" , Name);

    FD = open(Name , O_RDWR);

    if(FD == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is succesfully opened\n");
    }

    return 0;
}