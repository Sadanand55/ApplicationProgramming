import java.awt.*;
import java.awt.event.*;

class SadanandCalculate extends WindowAdapter implements ActionListener {
    public Button b1, b2, b3, b4;
    public TextField t1, t2;
    public Label lobj, l1,l2 ;

    public SadanandCalculate(String title, int B, int H) {
        Frame fobj = new Frame(title);
        fobj.setSize(B, H);
        fobj.setVisible(true);

        b1 = new Button("ADD");
        b2 = new Button("SUB");
        b3 = new Button("MUT");
        b4 = new Button("DIV");

        t1 = new TextField();
        t2 = new TextField();

        lobj = new Label();
        //l1=new Label("Enter the First Number");
        //l2=new Label("Enter the First Number");

       
        //fobj.setLayout(new FlowLayout());
           // Set bounds for buttons
           b1.setBounds(100, 80, 50, 50);
           b2.setBounds(100, 140, 50, 50);
           b3.setBounds(100, 200, 50, 50);
           b4.setBounds(100, 260, 50, 50);
   
           // Set bounds for text fields
           t1.setBounds(250, 90, 100, 20);
          
           t2.setBounds(250, 260, 100, 20);
           
   
           // Set bounds for label
           lobj.setBounds(100, 320, 200, 20);
        //    l1.setBounds(250,  50, 200, 20);
        //    l2.setBounds(250,  160, 200, 20);
        

        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(t1);
        fobj.add(t2);
        fobj.add(lobj); 
        // fobj.add(l1);
        // fobj.add(l2);

        fobj.addWindowListener(this);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
    }

    public void windowClosing(WindowEvent obj) {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj) {
        int ino1, ino2;
        try {
            ino1 = Integer.parseInt(t1.getText());
            ino2 = Integer.parseInt(t2.getText());

            if (aobj.getSource() == b1) {
                lobj.setText("Addition is " + (ino1 + ino2));
            } else if (aobj.getSource() == b2) {
                lobj.setText("Subtraction is " + (ino1 - ino2));
            } else if (aobj.getSource() == b3) {
                lobj.setText("Multiplication is " + (ino1 * ino2));
            } else if (aobj.getSource() == b4) {
                if (ino2 != 0){
                    lobj.setText("Division is " + (ino1 / ino2));
                } else {
                    lobj.setText("Cannot divide by zero.");
                }
            }

        } catch (NumberFormatException e) {
            lobj.setText("Invalid input format.");
        }
    }
}

class Calculate1 
{
    public static void main(String Arg[]) {


        SadanandCalculate Scobj = new SadanandCalculate("Sadanand", 500,500);
    }
}
