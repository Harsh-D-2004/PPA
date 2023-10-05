import java.awt.*;
import java.awt.event.*;

class GUIx3
{
    public static void main(String A[])
    {
        framescreationx fobj2 = new framescreationx("GUIx3");
    }    
}

class framescreationx
{
    public Frame fobj;
    
    public framescreationx(String title)
    {
        fobj = new Frame(title);
        fobj.setSize(300 , 300);
        fobj.setVisible(true);
        fobj.addWindowListener(new Framelistener());
    }
}

class Framelistener implements WindowListener
{
    public void windowActivated(WindowEvent obj){}
    public void windowDeactivated(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){}
    public void windowClosed(WindowEvent obj){}
    public void windowOpened(WindowEvent obj){}
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}