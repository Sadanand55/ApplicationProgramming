#include<stdio.h>

struct Demo 
{
    int No;
    float f;



};
int main(){

    struct Demo Arr[3];
    Arr[0].No=11;
    Arr[1].f=1.20;
    Arr[2].No=31;
    printf("%d\n",Arr[0].No);
    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(struct Demo)); 
    printf("%lf\n",Arr[1].f);
    

    return 0;
}