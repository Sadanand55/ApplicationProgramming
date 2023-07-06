#include<iostream>
using namespace std ;

void fun(int no)
{
    cout<<"inside call by value "<<no<<endl;
    no++;
}

void gun(int *p)
{
    cout<<"inside call by addresss\n"<<*p<<endl;
    (*p)++;
}

void sun(int &ref)
{
    cout<<"inside call by references :"<<ref<<endl;;

    (ref)++;




}

int main()

{
    int i=10;
    int j=10;
    int k=10;



    fun(i);     // fun(10);
    cout<<"value of i :"<<i<<endl;
    gun(&j);    // gun(100);
    cout<<"value of j :"<<j<<endl;

    sun(k);
    cout<<"value of k "<<k<<endl;





    return 0;
}