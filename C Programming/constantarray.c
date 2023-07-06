#include<stdio.h>

int main ()
{
    int Arr[4]={10,20,30,40};
    const int Brr[4]={10,20,30,40};

    // Brr[4]++;
    Arr[2]++;
    printf("%d\n",Arr[2]);

  const int No1=45;
    int*p=&No1;
//    No1++;
   p++;
//    No1=11;
   *p++;

   printf("%d\n",No1);
   printf("%d\n",p);
   printf("`%d\n",No1);
   printf("%d\n",*p);



    



    return 0;
}