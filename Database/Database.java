import java.sql.*;


class Database{

    public static void main(String a[]) throws Exception
    {

        String URl = "jdbc:mysql://localhost:3306/ppa41";
        String Username = "root" ;
        String Password = "root";

        String Query ="Select * from Student";

        Connection cObj = DriverManager.getConnection(URl,Username,Password);

        Statement sObj = cObj.createStatement();

        ResultSet rObj = sObj.executeQuery(Query);

        while(rObj.next()){
            System.out.println(" RID:"+rObj.getInt("RID"));
            System.out.println(" Name:"+rObj.getString("Name"));
            System.out.println(" City:"+rObj.getString("City"));
            System.out.println(" Marks:"+rObj.getInt("Marks"));

        }

        cObj.close();

    }
}