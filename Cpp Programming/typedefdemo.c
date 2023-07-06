#include<stdio.h>
typedef int INTEGER;
typedef int ULONG ;
struct Demo 
{
    int a;
    int b;


};


typedef struct Demo DEMO;
typedef struct Demo* PDEMO;
int main()
{
    INTEGER i=10;
    ULONG j=1222;

    DEMO obj;
   // struct Demo *ptr= NULL

    PDEMO ptr=&obj;
    ptr->a=4245;
    printf("%d",ptr->a);

    
    



    return 0;
}