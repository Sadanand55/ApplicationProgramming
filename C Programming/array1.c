#include<stdio.h>
int main ()
{  
    int Arr[4]={40,50};  // member by list 
    int Brr[4];
    int Crr[]={10,20,45,45,46,42};  // member by list without size

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    



    Brr[0]=10;   // member by member initialization
    Brr[1]=20;
    printf("%d\n",Brr[0]);
    printf("%d\n",Brr[1]);
    printf("%d\n",Brr[2]);
    printf("%d\n",Brr[3]);
     

     


    





    return 0;

}