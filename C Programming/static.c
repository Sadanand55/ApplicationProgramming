#include<stdio.h>


void hello()
{  
     static int B =20;         // Static Storage Class.......
     B++;
     printf("hello value is %d\n",B);


}
void Demo ()
{
    
    static int A=10;             // Auto Storage Class...... 
    A++;
    printf("demo value is %d\n",A);
    // hello();

   
}
int main()
{   Demo() ;
    Demo() ;
    // hello();
    // hello();

    return 0;
    
}