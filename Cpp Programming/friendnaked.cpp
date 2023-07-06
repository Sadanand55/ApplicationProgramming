#include <iostream>
using namespace std ;


class Demo

{
    public:
    int i;

    private :
    int j ;

    protected :
    int k;

    public:

    Demo()
    {    
        cout<<"inside the constructor \n";
         i=10;
         j=20;
         k=30;

        
     

    }
    friend void fun();
   

};

void fun()

{
    Demo obj;
  
    cout<<"value of i :"<<obj.i<<endl;
    cout<<"value of j :"<<obj.j<<endl;
    cout<<"value of k :"<<obj.k<<endl ;
    cout<<"size of demo class :"<<sizeof(Demo)<<endl;

}

int main()
{
   fun();
   return 0;
}