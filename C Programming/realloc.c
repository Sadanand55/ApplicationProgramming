#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0;
    int *ptr=NULL;
    int*nptr=NULL;
    nptr=(void*)realloc((ptr), sizeof(int));


    return 0;
}