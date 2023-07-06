import java.io.*;


class CreateFile {
    public static void main(String a[]) throws Exception {
        File fobj = new File("Sada.txt");
        if (fobj.createNewFile()) {
            System.out.println("File create Successfully ");
        } else {
            System.out.println("Unable to create the file");
        }
    }
}
