#include<stdio.h>
int main ()
{
    int No1=10;
    const int No2=10;
    // No2++;
    No1++;
    printf("%d\n",No2);
    printf("%d\n",No1);
    const int *p=&No1;
    p++;
    printf("%d\n",p);



    return 0;
}