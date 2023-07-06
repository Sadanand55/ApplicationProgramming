import java.util.Scanner;



class Data

{
    public int Arr[];
    
    public Data(int isize)
    {
        Arr=new int[isize];
    }

    void Accept()
    {
        int iCnt=0;
        System.out.println("Enter the Array Element");        
        Scanner sobj =new Scanner(System.in);
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
    }


}

class DemoOdd extends Thread
{
    public Data dobj;
    public DemoOdd(Data obj)
    {
        dobj =obj;
    }
    public void run()
    {
        for(int i=0;i<dobj.Arr.length;i++)
        {
            if(dobj.Arr[i]%2 !=0)
            {
                System.out.println("Odd Number is "+dobj.Arr[i]);
            }
        }
    }



}

class DemoEven extends Thread
{
   public Data dobj;
   public DemoEven(Data obj)
   {
    dobj=obj;


   }
    


    public void run()
    {
        for(int i=0;i<dobj.Arr.length;i++)
        {
            if(dobj.Arr[i]%2==0)
            {
                System.out.println("Even Number is "+dobj.Arr[i]);

            }
        }
    }
}





class ThreadDemo12
{
    public static void main(String Arg[])
    {
        Data obj= new Data(10);

        obj.Accept();

        DemoOdd oobj= new DemoOdd(obj);
        DemoEven eobj= new DemoEven(obj);

        Thread t1=new Thread(oobj);
        Thread t2=new Thread(eobj);

        t1.start();
        t2.start();



    }
}