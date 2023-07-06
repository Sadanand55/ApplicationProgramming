#include<stdio.h>

struct Demo
{
    int No;
    int No1;
    struct Demo *next;  // self declaraction pointer 

};
struct Demo1
{
   struct Demo1 next; 
};



int main()
{
    struct Demo1 obj; 
    struct Demo obj1;    


    return 0;
}