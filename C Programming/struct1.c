#include<stdio.h>

struct AM 
{
   int*ip;
   float*fp;

};




int main()
{
    struct AM obj;
    int i=11;
    float f=10.94;
    obj.ip=&i;
    obj.fp=&f;
    
    printf("%d\n",*(obj.ip));
    printf("%lf\n",*(obj.fp));
    return 0;
}