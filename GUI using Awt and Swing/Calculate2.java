import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class SadanandCalculate extends WindowAdapter implements ActionListener {

    public Button b0,b1, b2, b3, b4,b5,b6,b7,b8,b9,bm,ba,bd,bs,bsubmit,bclear;
    public TextField  t1, t2;
    public Label lobj ;
    String  s1,s2,s3,s4,s5;
    int c ,n;

    public SadanandCalculate(String title, int B, int H) {
        JFrame fobj = new JFrame(title);
        fobj.setSize(B, H);
        fobj.setBackground(Color.LIGHT_GRAY);
      //  fobj.setLayout(new FlowLayout());
        fobj.setVisible(true);
        t1= new TextField();
        t2 =new TextField();
       
        b0 = new Button("0");
        b1 = new Button("1");
        b2 = new Button("2");
        b3 = new Button("3");
        b4 = new Button("4");
        b5 = new Button("5");
        b6 = new Button("6");
        b7 = new Button("7");
        b8 = new Button("8");
        b9 = new Button("9");
        ba = new Button("+");
        bs = new Button("-");
        bm = new Button("*");
        bd = new Button("/");
        bsubmit= new Button("=");
        bclear=new Button("CLEAR");
        
          //Set bounds for buttons
           fobj.setBounds(500,500,500,500);
           b0.setBounds(100, 350, 40, 40);
           b1.setBounds(100, 300, 40, 40);
           b4.setBounds(100, 250, 40, 40);
           b7.setBounds(100, 200, 40, 40);

           bclear.setBounds(150, 350, 40, 40);
           b2.setBounds(150, 300, 40, 40);
           b5.setBounds(150, 250, 40, 40);
           b8.setBounds(150, 200, 40, 40);

           bsubmit.setBounds(200, 350, 40, 40);
           b3.setBounds(200, 300, 40, 40);
           b6.setBounds(200, 250, 40, 40);
           b9.setBounds(200, 200, 40, 40);

           ba.setBounds(250,350,40,40);
           bd.setBounds(250, 300, 40, 40);
           bs.setBounds(250, 250, 40, 40);
           bm.setBounds(250, 200, 40, 40);

   
           // Set bounds for text fields
        t1.setBounds(100, 150, 190, 50);
    
        // Display on screen on botton andd text Fields
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(b0);
        fobj.add(b5);
        fobj.add(b6);
        fobj.add(b7);
        fobj.add(b8);
        fobj.add(b9);
        fobj.add(ba);
        fobj.add(bs);
        fobj.add(bm);
        fobj.add(bd);
        fobj.add(bsubmit);
        fobj.add(bclear);
        
        fobj.add(t1);
        fobj.add(t2);
    
    

        fobj.addWindowListener(this);
        b0.addActionListener(this);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);
        ba.addActionListener(this);
        bs.addActionListener(this);
        bd.addActionListener(this);
        bm.addActionListener(this);
        bsubmit.addActionListener(this);
        bclear.addActionListener(this);
        t1.addActionListener(this);
        
        

    }

    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj) {
      
        if(aobj.getSource()==b0)
        {
            s3=t1.getText();
            s4="0";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b1)
        {
            s3=t1.getText();
            s4="1";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b2)
        {
            s3=t1.getText();
            s4="2";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b3)
        {
            s3=t1.getText();
            s4="3";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b4)
        {
            s3=t1.getText();
            s4="4";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b5)
        {
            s3=t1.getText();
            s4="5";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b6)
        {
            s3=t1.getText();
            s4="6";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b7)
        {
            s3=t1.getText();
            s4="7";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b8)
        {
            s3=t1.getText();
            s4="8";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==b9)
        {
            s3=t1.getText();
            s4="9";
            s5=s3+s4;
            t1.setText(s5);
        }
        if(aobj.getSource()==ba)
        {
            s1=t1.getText();
            t1.setText("");
            c=1;
        }
        if(aobj.getSource()==bs)
        {
            s1=t1.getText();
            t1.setText("");
            c=2;
        }
        if(aobj.getSource()==bm)
        {
            s1=t1.getText();
            t1.setText("");
            c=3;
        }
        if(aobj.getSource()==bd)
        {
            s1=t1.getText();
            t1.setText("");
            c=4;
        }
        if(aobj.getSource()==bsubmit)
        {try
           {
            s2=t1.getText();
            if(c == 1)
            {
                n=Integer.parseInt(s5)+Integer.parseInt(s2);
                t1.setText("Ans:"+String.valueOf(n));

            }
            
            if(c == 2)
            {
                n=Integer.parseInt(s1)-Integer.parseInt(s2);
                t1.setText("Ans:"+String.valueOf(n));

            }
            
            if(c == 3)
            {
                n=Integer.parseInt(s1)*Integer.parseInt(s2);
                t1.setText("Ans:"+String.valueOf(n));

            }
           
            if(c == 4)
            {
                n=Integer.parseInt(s1)/Integer.parseInt(s2);
                t1.setText("Ans:"+String.valueOf(n));

            }
          }catch (Exception e)
          {

          }
            
        }

        if(aobj.getSource()==bclear)
        {
            t1.setText("");
        }



        
    }
}

class Calculate2
{
    public static void main(String Arg[]) {


        SadanandCalculate Scobj = new SadanandCalculate("Sadanand", 500,500);
    }
}
