# include<stdio.h>  // header file including 


int Addition ( int ivalue1, int ivalue2)   //user defined function 
{
 int ioutput ;                    // LOCAL VARIABAL 
 ioutput= ivalue1+ivalue2;        // Addition occur 



 return ioutput;                  //   return value is integer
}

int Sub (int A ,int B)
{
   int subout=0;
   subout= A-B;
   return subout;

   
}
 
 
 
 
 int main()                       // entry point function get os 
{ 
 int No1 = 10;                    //no1 is variables with types is integer. values is 10.
 int No2 = 11;
 int ians =0; 
                        //ans is variables with types is integer. values is zero
 int ians2 =0;
 ians2 = Sub(No1,No2)      ;                
 ians =Addition( No1,  No2);
 
 printf("Add is %d \n", ians);       // formate specifiers' %d d is decimal 
 
 printf("Sub is %d \n",ians2);
return 0;
 }