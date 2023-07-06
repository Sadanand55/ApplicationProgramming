#include<stdio.h>

struct Student 
{
    int marks;
    int age;
    char division ;



};
int main()
{
    struct Student obj;
    
    struct Student *ptr=NULL;
    ptr=&obj;         // 8 byte 
    ptr->age=12;
    ptr->marks=50;
    ptr->division ='A';

    printf("%d\n",ptr->age);
    printf("%d\n",ptr->marks);
    printf("%c\n",ptr->division);

    
  





    return 0;
}