#include<stdio.h>
#include<stdlib.h>
int main ()
{  
   int Arr[5];     // static memory allocation  ///
    
  
   int *p=NULL;  // 200   // 8 byte    //1 yes//

   p= (int *) malloc(sizeof(int)*5);



  free(p);

   return 0;
}