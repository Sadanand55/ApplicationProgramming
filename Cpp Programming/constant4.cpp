#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
   // const int j; 
    int k; 


   Demo(int A, int B ) 
   {
    cout<<"inside the constructor \n";
    
     i=A;
     //j=B;

     i++;      // A
     //j++ ;     //NA

   }

   void fun() 
   {

    i++;                     //A
   // j++;                     // NA

   }
void gun() const

   {

    i++ ;            // NA
    j++;             // NA
 
    
   }

};

int main()
 {
    //    Demo obj1;
    //   const Demo obj2(10);
    Demo obj3(10,20);

    obj3.fun();
    // obj3.gun();
    return 0;
}