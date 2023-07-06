#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[25];
    int fd=0;
    char data[20]="\0";

    printf("Enter the file  that  you want read:");
    scanf("%s",fname);
    fd=open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
         printf("File is succesfully opened with FD : %d\n",fd);
    }
    
    lseek(fd, 5,SEEK_CUR);
    read(fd, data,8);
   
    printf("Data from file is : %s\n",data);

    close(fd);

}
