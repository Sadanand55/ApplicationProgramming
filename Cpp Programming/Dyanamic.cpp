#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *p=NULL;
    int iNo=0;
    cout<<"How many number want to allocate"<<endl;
    cin>>iNo;
    p=new int(iNo);
    int i=0;
    int isum=0;
    cout<<"Enter the Number"<<endl;
    for(i=0;i<5;i++)
    {   
      cin>>p[i];

    }

    for(i=0;i<5;i++)
    {
        isum=p[i]+isum;
       
    }


    cout<<"Sum is :"<<isum;


    return 0;
}
