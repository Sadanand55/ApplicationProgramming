#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[25];
    int fd=0;

    

    printf("Enter File Name that you want to open:");
    scanf("%s",fname);

    fd=open(fname,O_RDWR);
    
    if(fd == -1){
        printf("Unable to open file\n");
        return -1;
    }
    else{
        printf("File is succesfully opened with FD: %d",fd);
    }

    
}
