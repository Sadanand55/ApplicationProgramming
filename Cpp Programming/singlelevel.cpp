#include<iostream>
using namespace std;
#include<stdlib.h>

class Base 
{
    public:
    int i;
    int j;


    Base()
    {
        cout<<"Inside the constructor \n";
        i =0;
        j=0;


    }


    ~Base()
    {

       cout<<"Inside the distructor \n";

    }

    void fun()
    {

        cout<<"Inside the Fun function is \n";

    
    }


};

 class Derived : public Base   // Colan lihaych ahe 
 {
    public:
    int x ;
    int y ;

    Derived()
    {
        cout<<"inside the Derived class Constructor  \n";


    }

    ~Derived()
    {
        cout<<"Inside the Derived Class  Distructor \n";


    }

    void gun()
    {
        cout<<"inside the Derived Gun function \n";

    }




 };

int main()
{

    // Base*ptr=NULL;
    // ptr= new Base;
    // ptr->fun();

    Derived*ptr=NULL;
    ptr=new Derived;   ///16
     ptr->fun();
     ptr->gun();

    cout<<"Size of Derived :" <<sizeof(Derived)<<endl;
    
    delete ptr;
        





    return 0;
}