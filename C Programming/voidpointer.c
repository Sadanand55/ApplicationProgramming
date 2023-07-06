#include<stdio.h>
int main()
{   char ch ='A';
    char c='B';
    int i =10;
    float f=9.4;
    double d=4.222;

    // //char*cp=&ch;
    // int *ip=&i;
    // float*fp=&f;
    // double*dp=&d;
    

    void*vp =&ch;
    
    // void*vp = &f;
    // void*vp= &d;

    // printf("%c\n",*cp);
    // printf("%p\n",cp);
    // printf("%p\n",&cp);
    // printf("%d\n",sizeof(cp));
    
    printf("Data refer by vp :%c \n",*(char*)vp);
    vp=&i;
    printf("Data refer by vp :%d \n",*(int*)vp);
    vp=&f;
    printf("Data refer by vp :%lf \n",*(float*)vp);
    vp=&d;
    printf("Data refer by vp :%f\n",*(double*)vp);
    vp=&c;
    printf("Data refer by vp :%c\n",*(char*)vp);


    return 0;
}