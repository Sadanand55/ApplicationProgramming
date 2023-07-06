#include<iostream>
using namespace std;



class Demo 
{
    public:           // access specifer 
    int i;           //  instance variable  (non static )
    int j;          //  instance variable  (non static )
    static int k ;    // class variable (static )
    static int l ;   // class variable (static )


    Demo ()  // default constructor 
    {   cout<<"Default Constructor\n";
        i=0;
        j=0;


    }
    Demo(int A , int B) // parameterized constructor
    { cout<<"Parameterized constructor\n";
      i=A;
      j=B;


    }

    void Fun ()  // instance method  (object == instance)   fun(Demo *this)
    {
               // static + Non static 
        cout<<"Inside the Non static method \n";
        cout<<"Value of i :"<<this->i <<endl;
        cout<<"Value of j :"<<this->j <<endl;
        cout<<"value of K :"<< k <<endl;
        cout<<"Value of l "<< l <<endl;

    }

    static void Gun()    //class method 
    {
       
        cout <<"Inside the static method of gun\n";
        cout<<"Value of K : "<<k<<endl;
        cout<<"Value of L : "<<l<<endl;
        
    }

};
// (::--Scope resolution ) // load time variable 

int Demo:: k= 10;
int Demo::l = 45;

int main()

{   
    
     Demo Gun(); 
    // Demo ::Fun();
     Demo obj;
     Demo obj1(10,11);
     // // cout<<"size of obj1"<<sizeof(obj1)<<endl;
     Demo obj2(20,21);
     Demo obj3(45,45);
     
     cout<<"Value of obj1 is :"<<obj1.i<<endl;
     cout<<"Value of obj2 is :"<<obj2.i<<endl;
     cout<<"value of obj1 is :"<<obj1.j<<endl;
     cout<<"value of obj2 is :"<<obj2.j<<endl;
     
     obj1.Fun();     // Fun (&obj1)
     obj2.Fun();     // Fun(&obj2)
     obj3.Fun();
     
     

     return 0;

}