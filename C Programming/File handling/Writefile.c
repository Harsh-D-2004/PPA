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
    char Data[] = "India is my country";

    FD = open(Name , O_RDWR);

    if(FD == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened\n");
    }

    write(FD , Data , 19);

    return 0;
}