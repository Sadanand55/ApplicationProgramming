#include<stdio.h>

int x =10;    //Global variabal ===store is stack section 

void Demo()
{
    int B =30; //local variabal 
    printf("Value of B from Demo function %d\n",B);
    printf("Value of x from Demo %d \n",x);
  //  printf("%d\n",A);


}
int main ()
{
    int A =20;   // local variabal
    printf("Value of A from main function %d\n",A);
    printf("Value of x from main function %d\n",x);
   // printf("%d",B);

    Demo();

    return 0;
}