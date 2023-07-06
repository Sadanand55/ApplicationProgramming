#include<iostream>


class base
{
    public:
    int A,B;

};

class Derived : public base
{
    public:
    int x,y;


};


int main()
{
   base*bp=NULL;
   Derived*dp= NULL;
   Derived dobj;
   base bobj;

   bp=&bobj;   // no casting   ///
   dp=&dobj;   // no casting 
   bp=&dobj;   // up casting  
   //dp=&bobj;   // down casting     /// NA





    return 0;
}
