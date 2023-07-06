#include<iostream>
using namespace std;

class Demo 
{
    public:
    int i;
    int j;

    Demo()
    {
       cout<<"inside the constructor\n";
       i=11;
       j=21;

    }

    Demo(int A, int B)
    {
        cout<<"inside the parametric constructor \n";
       i=A;
       j=B;

    }




};
int main()
{
    Demo obj1;
    Demo obj2(10,20);
    const Demo obj3;
    //obj3.i++;
    obj2.i++;
    //cout<<"value of i"<<obj3.i<<endl;
    cout<<"value of i"<<obj2.i<<endl;
    const Demo obj4(10,20);


    return 0;
}