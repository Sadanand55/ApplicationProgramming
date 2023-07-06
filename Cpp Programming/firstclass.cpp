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
        iNo1=A;
        iNo2=B;
        
    }

    ~Math ()
    {
        cout<<"Inside Destructor\n";
    }


     int Addition ()   //(Class*This )
   {
       return iNo1+iNo2 ;
   }
    
     int substraction()
   {
        return iNo1-iNo2;
   }

    int multipication()

   {
     return iNo1*iNo2;

   }


};
int main()
{   cout<<"Inside the Main Function \n";
    Math mobj1;                           //   object of class  // 8 byte memory
    Math mobj2(11,10);
                       // object of class  // 8 byte memory
    int ret=0;
                                       // cout<<"size is "<<sizeof(mobj2)<<"\n";
    ret = mobj2.Addition();        //addition((&mobj1))
                                                         //printf("addition is : %d",&ret);
    cout<<"mobj1 Addition is :"<<ret<<"\n";
    ret= mobj2.Addition();         //  (&mobj2)
    cout<<"mobj2 Addition is :"<<ret<<"\n";
    ret=mobj2.substraction();         
    cout<<"Subtraction is :"<<ret<<"\n"; 
    ret=mobj2.multipication();
    cout<<"multipication is :"<<ret<<endl;
    return 0;
}