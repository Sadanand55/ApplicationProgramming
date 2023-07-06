# include<stdio.h>
int main()
{  int No1=11;
   double d;

   int *p= &No1;   // pointer is variable which stored address of variable. 
   printf("value of no1 from pointer %d\n",*p);   // adrress is the  long int ans its size id 8 bytes.....
   printf("%d",p);
   double*q =&d;
   printf("%d\n",*q);
   int ch='A';
   int *x=&ch;
   printf("size of ch pointer is %d",sizeof(x));
   

    return 0;
}