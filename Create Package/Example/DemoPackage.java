import Sadanand.Arithmatic;
import Sadanand.PPA.Loop1;
import java.util.Scanner;


class DemoPackage
{
    public static void main(String arg[])
    {   int iNo1=0;
        int iNo2=0;
      int iResult=0;
      Scanner sobj=new Scanner(System.in);
      
      System.out.println("Enter the first Number"); 
      iNo1=sobj.nextInt();
      System.out.println("Enter the Second Number");
      iNo2=sobj.nextInt();

      
      Arithmatic aobj=new Arithmatic(iNo1,iNo2);
      iResult=aobj.Addition();
      System.out.println("Addition is :"+iResult);
      iResult=aobj.Subtraction();
      System.out.println("Substraction is :"+iResult);
       Loop1 lobj=new Loop1();
       lobj.Display();
      




    }




}