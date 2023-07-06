import java.awt.*;
import java.awt.event.*;



class SadanandFrame 
{
    public SadanandFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(500,500);
        fobj.setVisible(true);

        fobj.addWindowListener(new SadanandListener());


    }

        




}

class SadanandListener extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

class Gui4
{
    public static void main(String arg[])
    {
        SadanandFrame sobj= new SadanandFrame("Sadanand");

    }
}