#include<iostream>
using namespace std;

class Overloading 
{   public:
    int Add (int A , int B)
    { 
        cout<<"Addition of 2 integer\n";
     
        return A+B;
    }

    int Add (int A ,int B, int C)
    {
        cout<<"Addition of 3 integer\n";

        return A+B+C;
    }

    float Add(float A,float B)
    {
        cout<<"Addition of 2 float \n";

        return A+B;
    }

    float Add (float A, float B, float C)
    {
        cout<<"Addition of 3 float \n";

        return A+B+C;
    }

    double Add(double A, double B)
    {
        cout<<"Addition of 2 Double \n";

        return A+B;

    }

    void fun(int A,float B)
    {
       

    }

    void fun(float ,float B )
    {


    }

     



};


int main()
{
     
    Overloading obj;
    int i ;
    float f;
    double d;
    i=obj.Add(12,45);
    cout<<i<<endl;
    i=obj.Add(1,2,3);
    cout<<i<<endl;
    f=obj.Add(1.1f,2.2f);
    cout <<f<<endl;
    f=obj.Add(1.1f,1.2,1.3);
    cout<< f<<endl;
    d=obj.Add(2.22,44.55);
    cout<<d<<endl; 
    


 

    return 0;
}