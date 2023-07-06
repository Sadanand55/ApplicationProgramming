#include<stdio.h>
#include<stdbool.h>

bool checkeven(int no)
{
    if(no%2==0)   
    {
       return true;
    }
    else
       return false;



}
int main ()
{   int No=0;
    int ans=0;
     printf("Enter the number :");
     scanf("%d",&No);
    ans=checkeven(No);

    if(ans==true)
    {
        printf("its is even");
    }
    else
        printf("it is odd");


     
    

    return 0;
}