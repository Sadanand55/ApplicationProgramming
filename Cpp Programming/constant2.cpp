#include<iostream>
using namespace std;

class Demo 
{   
    public:
    int i;
    int j;
    const int k=30;
    const int l=40;

    Demo()
    {
        cout<<"inside the constructor \n";
        i=0;
    }


    Demo(int A , int B ,int C ,int D)
    
    {
        cout<<"inside the para constructor \n";
        i=A;
        j=B;
        // k=C;
        // l=D;
        cout<<"value of i"<<i<<endl;
        cout<<"value of k "<<k<<endl;


        
      
    }



};

int main()
{
    Demo obj1;
    Demo obj2(50,20,40,20);


    return 0;
}