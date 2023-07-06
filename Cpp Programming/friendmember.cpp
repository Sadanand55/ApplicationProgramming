#include<iostream>
using namespace std;

class AMGroup{
    public:
        void fun();
}; 

class Demo 
{
    public:
    int i ;
    private:
    int j ;
    protected:
    int k; 

    public:
    Demo()
    {

        i=10;
        j=20;
        k=30;

    }

friend void AMGroup:: fun();  

};

  

void AMGroup::fun(){

    Demo obj;
    cout<<"value of i :"<<obj.i<<endl;
    cout<<"value of j :"<<obj.j<<endl;
    cout<<"value of k "<<obj.k<<endl;

}

int main()
{   
    AMGroup obj;
    obj.fun();
     
    // AMGroup *AM=new AMGroup;
    // AM->fun();
    


    return 0;
}