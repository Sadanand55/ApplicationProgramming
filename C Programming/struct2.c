#include<stdio.h>

struct PPA
{

    int Arr[3];
    float Brr[2];
    
};


int main () 
{
    struct PPA obj ;
    // obj.Arr[3] ;
    // obj.Brr[2];
    obj.Arr[0]=42;
    obj.Arr[1]=20;
    obj.Arr[2]=30;
    obj.Arr[3]=40;
    printf("%d\n",obj.Arr[0]);


    return 0;

}
