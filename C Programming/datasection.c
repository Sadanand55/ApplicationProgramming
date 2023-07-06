#include<stdio.h>

int No1=11;    // no bss (block starting with value ) --- with initialation  --- global variable-- data section
int No2;      //  bss  (block starting with symbol) ----non initialation   ---global variable --   data section 

static int A=10;  // static gloabl variable    ---data section
static int B;     // static gloabl variable    ----data section 

void Demo ()
{
    int x =10;         // local variabal  ---- memory alloocated in stack section 
    static int Y=40;    // static loacal variable    ----data section 
    printf("inside the demo");  



}
int main()
{
    Demo();
    return 0;
}