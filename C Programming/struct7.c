#include<stdio.h>

// struct Demo
// {
//     int A;
//     int B;


// };

// struct hello 
// {
//     int C;   // 4
//     float D;  //4

//     struct Demo dobj; //8 byte 


// };

struct hello
{

    int C;
    float D;
    struct Demo 
    {
        int A ;
        int B;
    } dobj;
};
int main()
{

    struct hello hobj;
    hobj.C=45;
    hobj.D=5.5;
    hobj.dobj.A=40;
    hobj.dobj.B=50;

    printf("%d\n",hobj.dobj.A);
    printf("%d\n",hobj.dobj.B);
}