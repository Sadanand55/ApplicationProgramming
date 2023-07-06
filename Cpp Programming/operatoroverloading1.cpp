#include <iostream>

using namespace std ;

class Demo 
{
    public:

    int i ;
    int j ;

    Demo (int i =0 ,int j=0)
    {

     int A= i;
     int B= j;

    }



};

int main()
{
    Demo A(10,20);
    Demo B(30,40);
    Demo C(0,0);

    Ans= A+B ;
    return 0;
}