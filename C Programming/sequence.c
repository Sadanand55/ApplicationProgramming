#include<stdio.h>

int Addition(int ino1,int ino2)

{
    int ioutput=0;
    ioutput=ino1+ino2;


    return ioutput;
}


int main()  // definition 
{   int No1=0;
    int No2=0;
    int ians=0;; 
    printf("Enter the first element :");      //write system call
    scanf("%d",&No1);
    printf("Enter the second Element :");
    scanf("%d",&No2);

    ians=Addition(No1,No2);     //definition 
    printf("Addition is %d",ians);






    return 0;
}