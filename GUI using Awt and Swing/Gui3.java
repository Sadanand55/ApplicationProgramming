import java.awt.*;
import java.awt.event.*;

class SadanandFrame 
{
    SadanandFrame(String title)
    {
        Frame fobj= new Frame(title);
        fobj.setSize(500,500);
        fobj.setVisible(true);
        
        fobj.addWindowListener(new SadanandListener());
    }
    
}

class SadanandListener implements WindowListener
{
    public  void windowActivated(WindowEvent obj){}
    public  void windowDeactivated(WindowEvent obj){}
    public  void windowIconified(WindowEvent obj){}
    public  void windowDeiconified(WindowEvent obj){}
    public  void windowOpened(WindowEvent obj){}
    public  void windowClosed(WindowEvent obj){}
    public  void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }


}




class Gui3
{
    public static void main(String ag[])
    {
        SadanandFrame sobj=new SadanandFrame("Sadanand");

    }

}