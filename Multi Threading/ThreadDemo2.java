

class Demo implements Runnable
{
    public void run()
    {
        int iCnt=0;
        for(iCnt=1;iCnt<25;iCnt++)
        {
            System.out.println(iCnt);
        }
    }
}

class ThreadDemo2
{
    public static void main(String arg[])
    {
        System.out.println("Inside the main function");
        System.out.println("Name of current thread is :" +Thread.currentThread().getName());

        Demo obj1= new Demo();
        Demo obj2= new Demo();

        Thread t1= new Thread(obj1);
        Thread t2= new Thread(obj2);

        t1.start();
        t2.start();
    

    }
}