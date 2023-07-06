

class CommandLine
{
    public static void main(String arg[]) throws Exception
    {   

        if(arg.length>2)
        {
            System.out.println("Pleace provide the two number as command line argrument");
            
            
        }
        int no1=Integer.parseInt(arg[0]);
        int no2=Integer.parseInt(arg[1]);
        int ians=no1+no2;
        System.out.println("Sum is "+ians);

    }
}