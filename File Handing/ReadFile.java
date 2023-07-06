import java.io.*;


class ReadFile {
    public static void main(String a[]) throws Exception 
    {
     
      {
        // FileReader fobj= new FileReader("Sada.txt");
        FileInputStream fobj =new FileInputStream("Sada.txt");
        int i;
        while((i=fobj.read())!=-1)
        
           System.out.print((char)i);
           fobj.close();

        
    }
}
}
