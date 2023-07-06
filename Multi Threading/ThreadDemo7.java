

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

class ThreadDemo7
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

        t1.start();
        t2.start();
        

        t1.join();
        t2.join();

        System.out.println("End of main Thread");
    }
}