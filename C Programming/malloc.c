#include<stdio.h>
#include<stdlib.h>

struct Demo 
{
    int i ;
    float f ;
 
   


};

int main()
{
    struct Demo obj;
    struct Demo *ptr= NULL;

    // ptr=(struct Demo*)malloc(sizeof(struct Demo));     //malloc(8)   8 byte    return v
    ptr=(struct Demo*)calloc(2,sizeof(struct Demo));
    obj.i=11;
    obj.f=12.2;

    ptr->i=11;
    ptr->f=12.2F;
    // free(ptr);
    printf("%d\n",ptr->i);
    
    printf("%d",obj.i);

    return 0;
}