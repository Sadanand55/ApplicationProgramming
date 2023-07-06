#include<iostream>
using namespace std;

class circle

{
    public :    // access specifer 
    float PI;    // non static 
    float Radius;   // non static 



    circle()
    {
        cout<<"inside the circle constructor \n";
        PI=3.14;
        Radius=0.0;

     }

    circle(float A , float B)
    {
        cout<<"inside the circle parameterized constructor \n";
        PI=A;
        Radius=B;



    }

    void Display ()                                    // concrete function/method 
    {

        cout <<"value of radius is :"<<Radius<<endl;
    }



   virtual float area()=0 ;                        //   abstract function/method //  // do not address of area 
   virtual float circumference()=0;         //    abstract function/method //                   
    
    






};

class AMGroup : public circle


{
   public:
    AMGroup():circle()     /// explicity call kel ahe constructor la

    {

    }

    AMGroup(float x, float y):circle( x,y)
    {


    }


    float area()
    {
        float Ans= PI*Radius*Radius;

        return Ans;

    }

    float circumference ()
    {

        float Ans=0.0;
        Ans= 2*PI*Radius;
        return Ans;
    }






};


int main()
{

    AMGroup obj;
    AMGroup obj1(3.1 , 10.8);
    float fret=0.0;
    fret=obj1.area();
    cout<<"Area is :"<<fret<<endl;
    fret = obj1.circumference();
    cout<<"circumference is :"<<fret<<endl;
    
    
    
    
    return 0;
}