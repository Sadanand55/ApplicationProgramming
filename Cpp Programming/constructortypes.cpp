#include<iostream>
using namespace std ;

class Demo 
{
    public:
    int i , j ;
    Demo ()
    {
        i=0;
        j=0;
    }

    Demo(int A,int B)
    {
        i= A;
        j= B;

    }
    Demo(Demo &ref)
    {
        i=ref.i;
        j=ref.j;

    }



};

int main()
{
    Demo obj1;
    cout<<obj1.i<<endl;
    cout<<obj1.j<<endl;
    Demo obj2(10,20);
    cout<<obj2.i<<endl;
    cout<<obj2.j<<endl;
    
    Demo obj3(obj2);
    cout<<obj3.i<<endl;
    cout<<obj3.j<<endl;




    return 0;
}