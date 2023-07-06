#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[25];
    int fd=0;
    char data[20]="HelloSadanand";

    printf("Enter the file  that  you want write:");
    scanf("%s",fname);
    fd=open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
         printf("File is succesfully opened with FD %d:",fd);
    }
     
    write(fd, data,20);
    close(fd);
}
