#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[25];
    int fd=0;

    printf("Enter the file name :");
    scanf("%s",fname);
    fd=creat(fname,0777);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is created ",fd);
    }
}
