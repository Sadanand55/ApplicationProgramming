#include <iostream >
using namespace std;


int main()
{

    int No=11;
    int &x=No;// references operate
    int &a=No;
    int *p =&No;
    double d=5.5;
    double &y=d;
    double &z=d;

    cout<<"number is :"<<No<<endl;
    cout<<"print &x value is :"<<a<<endl;
    cout<<"pointer value :"<<*p<<endl;



    


    return 0;
}