

class Demo extends Thread
{
    public void run()
    {  
     try
        {
        int iCnt=0;
        for(iCnt=0;iCnt<10;iCnt++)
        {
            System.out.println(Thread.currentThread().getName()+" :" +iCnt);
            Thread.sleep(500);
            
        }
            
        } catch (InterruptedException e)
        {

        }
       
    }
}

class ThreadDemo11
{
    public static void main(String arg[]) throws InterruptedException
    {
        System.out.println("Inside the main function");
        System.out.println("Name of current thread is :" +Thread.currentThread().getName());

        Demo obj1= new Demo();
        Demo obj2= new Demo();

        Thread t1= new Thread(obj1);
        Thread t2= new Thread(obj2);
        t1.setName("First");
        t2.setName("Second");
       
        System.out.println("Priority of t1 " +t1.getPriority());
        System.out.println("Priority of t2 " +t2.getPriority());
        System.out.println("Priority of main " +Thread.currentThread().getPriority());

        t2.setPriority(10);
        t1.setPriority(1);

        System.out.println("Priority of t1 " +t1.getPriority());
        System.out.println("Priority of t2 " +t2.getPriority());

        t1.start();
        t2.start();

        t2.join();
        t1.join();
        

        

        System.out.println("End of main Thread");
    }
}