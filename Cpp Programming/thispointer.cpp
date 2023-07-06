#include<iostream>
using namespace std ;


class Demo 
{
    public :
    int i;
    float f;
    double d;


    void fun(int a)  //(Demo *this , 11)
    {
        cout<<"inside the fun "<<endl;
        cout<<this->i<<endl;
        cout<<this->d<<endl;




    }
    void gun (int A, int B)
    {
        cout<<"Inside the Gun function"<<endl;


    }



};


int main()
{
    Demo obj1;
    Demo obj2;

    obj1.i=101;
    obj2.i=201;
    obj1.f=2.14;
    obj1.fun(11);          // fun(&obj1 , 11) //( 100)
    obj2.fun(12);         // fun(&obj2 , 11)
    obj1.gun(11,12);     //gun(&obj1 , 11,12)






    return 0;
}