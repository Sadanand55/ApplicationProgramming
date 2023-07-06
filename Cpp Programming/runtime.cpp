#include<iostream >
using namespace std;


class base
{

    public:   /// access specifier 
    int A;
    int B;
   


    void fun()  // function defn
    {
        cout<<"inside the fun base class\n";


    }

    void gun()     //      fun defn
    {
        cout<<"inside the gun base class\n";

    }


    void gun(int A, int B)  // fun overloaded 

    {
        
        cout<<"inside the 2 parameter gun base class \n";


    }





} ;



class Devrived : public base

{
    public :
    int x;
    int y;

    void sun()    // defin of function

    {
       cout<<"inside the sun drived class \n";

    
    }

    void fun(int x)   // redefin  of function
    {
      cout<<"inside the fun derived class\n";

    }


    


};



int main()
{
    Devrived obj;

    obj.fun(10);
    obj.base::fun();
    obj.gun();
    obj.gun(10,45);
    obj.sun();
    // base bobj;
    // bobj.fun();




    return 0;
}