#include<stdio.h>

int main ()
{   char c ='A';
    int i =11;
    float f=3.1;
    double d =9.7888;
    printf("Value of variable\n");

    printf("Char : %c\n",c);
    printf("integer : %d\n",i);
    printf("float : %f\n",f);
    printf("double :%lf\n",d);


    printf("Size of variable is given below\n");

    printf("size of char is %d\n",sizeof(c));
    printf("size of int is %d\n",sizeof(i));
    printf("size of float is %d\n",sizeof(f));
    printf("size of double is %d\n",sizeof(d));

    printf("address of variable is given\n");

    printf("address of char is%p\n",&c);
    printf("Address of int is %p\n",&i);
    printf("address of float is %p\n",&f);
    printf("Address of double is %p\n",&d);






    return 0;
}