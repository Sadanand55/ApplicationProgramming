#include<iostream>
using namespace std;

class Base1 
{
    public :
    int A ;
    int B;

    Base1()
    {
        cout<<"Inside the Base 1 constructor\n";
    }

    ~Base1()
    {
        cout<<"inside the Base1 Disctutor\n";


    }

    void fun()
    {

        cout<<"inside the fun function\n";
    }




};

class Base2
{
    public:
    int i;
    int j;

    Base2()
    {

        cout<<"inside the base2 constructor\n";

    }
   ~Base2()
   {

      cout<<"inside the base2 disctotor\n";

   }

   void gun()
   {
    cout<<"inside the gun function :\n";

   }
};

class derived : public Base2 , public Base1

{

    public:
    int j;
    int k;

    derived()
    {
        cout<<"inside the derived class constructor\n";

    }

    ~derived()
    {
        cout<<"inside the Derived class disctotor\n";

    }

    void mun()
    {

        cout<<"inside the mum function\n";
    }

};
int main()
{
    // derived*ptr=NULL;
    // ptr= new derived;
    derived obj;

    cout<<"size of derived class is :"<<sizeof(derived)<<endl;
    obj.fun();
    obj.gun();
    obj.mun();
     


    return 0  ;
}