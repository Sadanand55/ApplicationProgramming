

class Demo implements Runnable
{
    public void run()
    {
        int iCnt=0;
        for(iCnt=0;iCnt<100;iCnt++)
        {
            System.out.println(Thread.currentThread().getName()+" :" +iCnt);
            
        }
    }
}

class ThreadDemo3
{
    public static void main(String arg[])
    {
        System.out.println("Inside the main function");
        System.out.println("Name of current thread is :" +Thread.currentThread().getName());

        Demo obj1= new Demo();
        Demo obj2= new Demo();

        Thread t1= new Thread(obj1);
        Thread t2= new Thread();
        t1.setName("First");
        t2.setName("Second");

        t1.run();
        t2.run();
    }
}