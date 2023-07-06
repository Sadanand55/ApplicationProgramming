#include<stdio.h>

struct Demo       // struc declaration 
{   int j ;        // no memory allocation to create the stucture 
    int i;    
    float f; 
    // double d; 
    
} obj; 



int main()
{
    // struct Demo obj;    //struct cha object create kela ahe as mantat.
    struct Demo obj2;    //  memory get alo
    struct Demo obj3 ;
    obj.i=20;
    obj2.f=4.5;   // member initialazation
    obj3.j=50;
    printf("size of demo is %d\n", sizeof(obj2));
    printf("%d\n",obj.i);
    printf("%lf\n",obj2.f);




    return 0;
}