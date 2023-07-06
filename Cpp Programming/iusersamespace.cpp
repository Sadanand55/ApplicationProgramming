#include<iostream>
// using namespace std ;

namespace 
{
    class Demo 
    {
        public:
        int i ,j;


        void fun()
        {
           std::cout<<"inside the fun Demo from Marvellous\n";



        }




    };


    class Hello
{
    public:
    int x,y;

};

    
}


namespace Infosystems
{

    class Demo 
    {

        public:
        int a,b;

        void fun()
        {
            std::cout<<" inside the fun of Demo from infosystem\n ";
        }

    };


}



int main()
{

    Demo obj1;
    obj1.fun();

    Infosystems::Demo obj2;
    obj2.fun();
//    using namespace Marvellous;
   
//     Demo obj3;
//     obj3.fun();
    





    return 0;

}