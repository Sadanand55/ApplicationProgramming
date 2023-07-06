#include<iostream>

using namespace std ;


class Array 
{

    public:
    int isize;
    int *arr;

    Array(int ilength)

    {
        isize = ilength;
        arr = new int[isize];
;

    }
    void Accept()
    {
       
       cout<<"Enter the number values \n";
       for(int i=0; i<isize;i++)
       {
          cin>>arr[i]
       }
        
    }

    void Display()
    {
        for (int i= 0 ; i<isize; i++)
        cout<< " "<<arr[i]<<endl;




    }

    int Sum()
    {
        int sum=0 ;
        for(int i=0; i<isize;i++)
        
            sum= arr[i]+sum;

            return sum;


        



    }

  ~Array()
  {
    cout<<"inside the Destructor\n";
    delete[] arr;
  }





};





int main()
{
    Array*Sp=NULL;

    Sp= new Array(4);

    // Array obj(4);
    // obj.Accept();
    // obj.Display();
    Sp->Accept();
    Sp->Display();
    int ret=0;
    ret =Sp->Sum();
    
    cout<<"sum is "<<ret<<endl;







    return 0;
}