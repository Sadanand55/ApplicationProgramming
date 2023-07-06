#include<iostream>
using namespace std ;


class Math       // declaraction
{
    public :     //  anyone can access      access specifers  (3 ap )
    int iNo1;   // characteristics 
    int iNo2;

    Math()
    {
        cout<<"Inside Default Constructer\n";
        int iNo1=0;
        int iNo2=0;

    }

    Math(int A , int B)
    {

        cout<<"Inside the Paramatric Constructer\n";
    ;
          iNo1=A;
          iNo2=B;
    }

    ~Math ()
    {
        cout<<"Inside Destructor\n";


    }


    int Addition ()
   {
   


     return iNo1 +iNo2;
    }
    
    int substraction()
    {
        return iNo1-iNo2;
    }





};

int main()
{
  
    cout<<"Inside the Main Function \n";

    Math mobj1;  ///   object of class  // 8 byte memory
    Math mobj2(10,12);   // object of class  // 8 byte memory
      int ret=0;
//    / cout<<"size is "<<sizeof(mobj2)<<"\n";
  
    ret = mobj2.Addition();
    // //printf("addition is : %d",&ret);
    cout<<"Addition is :  "<<ret<<"\n";
    
    //  ret=mobj2.substraction();
    //  cout<<"Subtraction is :"<<ret<<"\n"; 
    // return 0;
}