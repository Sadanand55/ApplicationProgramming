# include<stdio.h>

int main()
{
    // int mark1=90;
    // int mark2=45;
    // int mark3=478;
    // int mark4=12;
    // int mark[4];
    // mark[0]=90;
    // mark[1]=45;      /// member by member initialization
    // mark[2]=478;
    // mark[3]=12;

    int mark[4]={90,45,478,12};  //  member by list 
    
    
    printf("base addresss of array is %p\n",mark);
    printf("%d\n",mark[0]);

    printf("size of of array is %d\n",sizeof(mark));
    printf("Address of array is %p\n",&mark);








    return 0;
}