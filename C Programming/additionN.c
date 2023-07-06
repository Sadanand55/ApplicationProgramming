#include<stdio.h>
#include<stdlib.h>



int main()
{
    int iNo=0;
    int isum=0;
    int *ptr=NULL;
    printf("Enter no of element\n");
    scanf("%d",&iNo);
    ptr=(int*)malloc(sizeof(int)*iNo);

    register int icnt=0;
    printf("Memory allocation is succesfull\n");
    printf(" Plz Enter the Number: \n");
    
    for( register int icnt=0; icnt<iNo;icnt++)
    {   
       
        scanf("%d\n",&ptr[icnt]);
         
    
 

    }
    printf("Adding Number\n");
    for(register int icnt=0; icnt<iNo;icnt++)
    {
    
        isum =ptr[icnt]+isum;
        
        
    }

  printf("Addition is  %d\n",isum);

    

    free(ptr);


    return 0;

}
