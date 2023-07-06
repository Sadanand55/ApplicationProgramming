import java.io.*;


class WriteFile {
    public static void main(String a[]) throws Exception 
    {
        FileOutputStream fobj =new FileOutputStream("Sada.txt");

        String data="hellosadanand";

        byte bdata[]= data.getBytes();
        fobj.write(bdata);
    }
}
