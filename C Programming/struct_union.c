#include<stdio.h>
#pragma pack(1)  /////  1 by 1 byte memmory det ahe 
struct hello
{
    
    // char dh;
    int i;
    float f;
     
    double d;

};
union Hello 
{   double d;
    int i;
    float f;
    



};



int main()
{
    struct hello hobj;
    union Hello Hobj;
    Hobj.i=45;
    Hobj.d=45.122;
    // Hobj.i=45;
    printf("%lf\n",Hobj.d);
    printf("%d\n",Hobj.i);
    printf("%d\n",sizeof(hobj));
    printf("%d\n ",sizeof(Hobj));

    return 0;
}