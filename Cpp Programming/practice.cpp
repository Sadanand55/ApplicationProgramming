#include<iostream>
#include<stdlib.h>
using namespace std;


 
    
    int *P=NULL;  
   

void Accept(int iNo)
{
    
     P= new int[iNo];
    int iCnt =0;
    for(iCnt =0; iCnt<iNo; iCnt++)
    {
        cin>>P[iCnt];
    }
    

}
void Display()
{
    int iCnt=0;
    cout<<"Array element is : ";
    for(iCnt=0; iCnt<4 ;iCnt++)
    {
      cout<<P[iCnt];

    }

}



int Operation ()
{
    int isum=0;
    int iCOUT=0;
    for(int iCnt=0; iCnt<4; iCnt++)
    {
        cout<<iCnt;
        iCOUT=iCnt;

        
    }

    return 


}


int main ()
{   int iRet=0;
    cout<<"Enter the size of array :";
     int ivalue=0;
    cin>>ivalue;

    Accept(ivalue);
   Display();
   iRet=Operation();
   cout<<"opration are "<<iRet;
   

    return 0;
}