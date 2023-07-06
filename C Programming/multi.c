# include<stdio.h>

int multiplication(int ivalue1,int ivalue2)
{ 
    int ioutput =0;
    ioutput= ivalue1*ivalue2;


    return ioutput;
}

int main()
{
 int iNo1=12;
 int iNo2=10;
 int ans =0;
 ans= multiplication(iNo1, iNo2); //function call  

 printf("Multication is %d \n",ans );

return 0;

}
