import java.awt.*;
import java.awt.event.*;

class GUIx4
{
    public static void main(String A[])
    {
        framescreationx1 fobj2 = new framescreationx1("GUIx3");
    }    
}

class framescreationx1
{
    public Frame fobj;
    
    public framescreationx1(String title)
    {
        fobj = new Frame(title);
        fobj.setSize(300 , 300);
        fobj.setVisible(true);
        fobj.addWindowListener(new Framelistenerx());
    }
}

class Framelistenerx extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}