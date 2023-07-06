import java.io.*;

class RandomAcessFile

{

    public static void main(String arg[]) throws Exception
    {
          
         {
            RandomAccessFile file = new RandomAccessFile("monu.txt","rw");  
        
            file.writeUTF("SadanandSonu");
            file.seek(0);

       
            String data=file.readUTF();
            
            
            System.out.println("file data is : "+data);


        
        }
             
           
        
      
    



    }
    
}