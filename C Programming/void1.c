#include<stdio.h>
int main()
{ 
    int No1=10;
    int No2=20;
    int No3=30;
    int *p=NULL;
    p=&No1;
    p=&No2;
    p=&No3;
    printf("%d\n",*p);


    return 0;

}