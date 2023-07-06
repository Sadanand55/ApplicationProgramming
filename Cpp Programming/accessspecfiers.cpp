#include<iostream>

using namespace std;

class Base
{   int x;
    public: int i ;
    private:int j;
    protected: int k;


    public:
    Base()
    {
        cout<<"inside the Base Constructor\n";
        
         i=10;
         j=12;
         k=30;
    
    }

    ~Base()
    {
        cout<<"inside the base discrutor \n";
        
    
    }

    void fun()
    {   
        

        cout<<"value of public i "<<i<<endl;
        cout<<"value of private j "<<j<<endl;
        cout<<"value of protected k "<<k<<endl;
    }

};


int main()
{
    Base obj;
    cout<<"value of public i"<<obj.i<<endl;   // A
    // cout<<"value of private j "<<obj.j<<endl;  // NA
    // cout<<"value of protected k"<<obj.k<<endl;   // NA
    obj.fun();
    


    return 0;
}