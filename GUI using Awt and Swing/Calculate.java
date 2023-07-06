import java.awt.*;
import java.awt.event.*;


class SadanandCalculate extends WindowAdapter
{
    public SadanandCalculate(String title, int B, int H)
    { 
        
        Frame fobj= new Frame(title);
        fobj.setSize(B,H);
        fobj.setVisible(true);

        Button b1,b2,b3,b4;
        TextField t1,t2;
        Label l1,l2;
       
        

        b1=new Button("ADD");
        b2= new Button("SUB");
        b3= new Button("MUT");
        b4= new Button("DIV");

        t1=new TextField();
        t2=new TextField();
        l1=new Label("L1");
        l2=new Label("L2");
        fobj.setLayout(new FlowLayout());
        // b1.setBounds(100,40,50,50);
        // b2.setBounds(100,90,50,50);
        // b3.setBounds(100,130,50,50);
        // b4.setBounds(100,170,50,50);
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(t2);
        fobj.add(t1);
        fobj.add(l1);
        fobj.add(l2);




        fobj.addWindowListener(this);
       

    }

    public void windowClosing(WindowEvent obj)
        {
            System.exit(0);
        }

        

    

}








class Calculate                                                                                                                 
{
    public static void main(String Arg[])
    {
       SadanandCalculate Scobj= new SadanandCalculate("Sadanand",500,500);



    }


}