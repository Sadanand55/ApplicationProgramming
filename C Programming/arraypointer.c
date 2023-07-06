#include<stdio.h>
int main()
{
    int Arr[4]={10,20,30,40};
    printf("Base address of arry %d\n",&Arr[0]);
    int *p=&Arr[3];
     
    int*q = &Arr[2]; 
    printf("%d\n",*p);
    printf("%d\n",*q);
     printf("%d\n",p);
    printf("%d\n",q);


    return 0;
}