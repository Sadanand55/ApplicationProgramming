#include<iostream>
using namespace std;

class Demo 
{
    public:
    int i ;   // non static
    int j;   // non static

    Demo()
    {
        cout<<"Inside the constructer \n";
        
    }

    Demo(int A,int B)
    {
        cout<<"inside the paramatric constructer  \n";

         i= A;
         j= B;
    
    }
    ~Demo()
    {
        cout<<"Inside the Distructor \n";
    }
    void fun()
    {
        cout<<"inside the fun function \n";
        i=10;
        j=12;

    }
};
int main()

{
    // Demo obj;
    // Demo obj1(10,12);

    Demo*ptr=NULL;
   // ptr=new Demo ;
    ptr=(Demo*)malloc(sizeof(Demo));
    ptr->fun();
    cout<< ptr->i<<endl;
    cout<<ptr->j;
    //delete (ptr);     //using the delect keyword we can delocated the memory of object
    free(ptr);


    return 0;
}
