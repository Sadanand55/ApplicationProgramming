#include<iostream>
using namespace std;
class Base 
{
    public:int i;
    private :int j;
    protected :int k;
   
   public:

      
   Base()
   {
     i =10;
     j =20;
     k =30;

   }


};


class Devrived  : protected Base


{

    public:

    void fun()

    {
        cout<<"value of public i "<<i<<endl;
        //cout<<"value of private j "<<j<<endl;
        cout<<"value of protected k "<<k<<endl;



    }


};

// class Devrivedx : public Devrived
// {
//     public:
    
//     void gun()
//     {
//         cout<<"value of gun public i"<<i<<endl;
//         cout<<"value of gun protected k"<<k<<endl;
//     }


// };

int main()
{
    Devrived obj ;
    obj.fun();
    // obj.gun();


    return 0;
}
