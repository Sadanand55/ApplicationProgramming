#include <iostream>

using namespace std ;


class Demo

{
     private:

    int A ;
    int B ;
    public:
  
    Demo (int i =0 ,int j=0)
    { 

      A= i;
      B= j;

    }
    void Display ()
    {
        cout<<A<<endl;
        cout<<B<<endl;
    }

  friend Demo operator + (Demo , Demo);
  





};

Demo operator +(Demo X, Demo Y)   + is an operator overloaded function which accept 
{                                                     parameter 
    cout<<"inside the + operator function \n";


    return Demo(X.A+ Y.A ,X.B +Y.B);
}


int main()
{
    Demo X (10,20);
    Demo Y (30,40);
    Demo Ans ;
    Ans= X+Y ;  /// compound exepression 
    Ans = X-Y;
    Ans.Display();
    return 0;
}