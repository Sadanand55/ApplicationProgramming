#include<iostream>
using namespace std;
#include<stdlib.h>


class Base
{

    public:
    int i;
    int j ;
   
  Base ()
  {

    cout<<"inside the base class constructor\n";
  }

  ~Base()
  {
    cout<<"inside the base class disctutor \n";
  }

  void fun()
  {
    cout<<"inside the fun function\n";
  }


};

class Derived : public Base
{
    public :
    int k ;
    int l;


    Derived()
    {
        cout<<"Inside the Derived Class Constructor\n";

    }
    
    ~Derived()
    {

        cout<<"inside the Derived Class Disctutor\n ";

    }

    void Gun()
    {

        cout<<"inside the Gun function\n ";

    }


};

class Derivedx:public Derived

{
    public:
    int A ;
    int B;

    Derivedx()
    {

        cout<<"inside the Derived1 class construtor\n";

    }
    ~Derivedx()
    {
        cout<<"inside the Derived1 class Disctuctor\n";
    }

    void jun()
    {
        cout<<"inside the Jun function \n";
    }






};



int main()
{
    Derivedx*ptr=NULL;
    ptr=new Derivedx;
    cout<<"Size of base :"<<sizeof(Derivedx)<<endl;
    
    ptr->jun();
    ptr->Gun();
    ptr->fun();
    

    delete ptr;




    return 0;
}