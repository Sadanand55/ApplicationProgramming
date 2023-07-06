#include<iostream>
using namespace std;

class base
{
    public:
    int A,B;

   void fun()  // def of function   //1000
    {
        cout<<"inside the base fun\n";




    }


  virtual void gun()   // def of function //2000     ///   gun (this *base )
    {
        cout<<"inside the base gun\n";



    }


  virtual void sun()   // def of function  //3000
    {
        cout<<"inside the base sun \n";


    }


  virtual void run()
    {
        cout<<"inside the  base run \n"; //4000


    }

    void mun ()                         //7000
   {
       
       cout<<"inside the derived mun \n";

   }

};

class Derived : public base

{

  public:
   int x;
   int y;

     void gun()     // redif of function  //5000
   {
     cout<<"inside the Derived gun \n";


   }

   void run()  // def of function    //6000
   {

      cout<<"inside the derived run \n";


   }

   void mun ()                         //7000
   {
       
       cout<<"inside the derived mun \n";

   }



};

int main()
{

   

    cout<<"size of base class :"<<sizeof(base)<<endl;
    cout<<"size of  Derived class : "<<sizeof(Derived)<<endl;


    // base*bp=NULL;
    // Derived dobj;
    //        bp=&dobj ;    // A  // upcasting 

    // base*bp=new Derived;

     
    Derived dobj;
    

    base &bref = dobj;
    bref.fun();
    // bp->fun();   // base           
    // bp->gun();   // derived      ........(&dobj )
    // bp->sun();    // base 
    // bp->run();    //  Derived 
    // bp->mun();

/*










*/

    return 0;
}