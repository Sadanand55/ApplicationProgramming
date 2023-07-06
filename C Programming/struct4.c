#include<stdio.h>
struct Demo
{
  int No;
  struct Demo *next;  /// Self references pointer 

};

int main()
{
    struct Demo obj1;  ///12
    struct Demo obj2;  //12
    struct Demo obj3;
    obj1.No=11;
    obj2.No=21;
    obj3.No=31;
    
    obj1.next=&obj2;
    obj2.next=&obj3;
    obj3.next=NULL;

    obj1.next ->No;
    obj2.next ->No;
    printf("%d\n",obj1.No);
    printf("%d\n",*(obj1.next));
    printf("%d\n",*(obj2.next));


  






}


