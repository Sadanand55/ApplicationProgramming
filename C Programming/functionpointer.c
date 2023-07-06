#include<stdio.h>


void fun()
{
    printf("Hello Word \n");
}

int addition(int iValue1, int iValue2)

{    printf("addition \n");
     int ans=0;
     ans = iValue1+iValue2;
     printf("%d\n",ans);


    return ans;
}


int main ()
{
     fun();  //function call
    void (*fptr)();
    fptr=fun;
    fptr();
    int (*fptr1)();
    fptr1=addition;
    fptr1(20,4);

    int a =0;
//    a=addition(40,20);
//    printf("%d\n",a);

    

return 0;
}