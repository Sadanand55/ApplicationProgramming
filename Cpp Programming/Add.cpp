#include<iostream>
using namespace std;
class Add
{
    public:
    int iNo1;
    int iNo2;

//     Add(int A , int B)
//    {
//       iNo1=A;
//       iNo2=B;
        

//     }

    int addition(int A ,int B  )
    {
        return A+B;
    }

};

int main()
{
    Add obj;
    cout<<"Heyy Sada"<<endl;
    int output=0;
    output=obj.addition(4,4);
    cout<<"Add is"<<output;
    return 0 ;
}