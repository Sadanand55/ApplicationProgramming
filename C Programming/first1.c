#include<stdio.h>
extern int No1;   //// no memory required ---decla
extern int No2;
extern int No3;
extern void Demo();


int main()

{
    printf("Value of No1 is %d\n",No1);
    printf("Value of No2 is %d\n",No2);
    // printf("Value of No3 is %d",No3);   /// no3 is local variable ()extern only defuilt global variable 
    Demo();   // function call

    return 0;
}