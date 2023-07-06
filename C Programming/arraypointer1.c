#include<stdio.h>

int main ()
{   
    
    int Arr[4]={11,21,51,10};

    printf("%d\n ",sizeof(Arr));  // 4*4=16+ 
    printf("%d\n",sizeof(Arr[2]));  
    printf("%d\n",Arr[2]);
    printf("%p\n",Arr);   //100
    printf("%p\n",&Arr);  //100
    printf("%d\n",*(Arr+1)); // 104
    printf("%p\n",(&Arr+2)); // 116
    printf("%p\n",&Arr[4]); //116
    printf("%d\n",2[Arr]);

    return 0;
}
