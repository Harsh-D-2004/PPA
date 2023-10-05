import java.awt.*;
import java.awt.event.*;

class GUI4
{
    public static void main(String a[])
    {
        MarvellousFrame1 fobj = new MarvellousFrame1("PPA");
    }
}

class MarvellousFrame1
{
    public MarvellousFrame1(String title)
    {
        Frame fobj =  new Frame(title);
        fobj.setSize(500 , 500);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener implements WindowListener
{
    public void windowDeactivated(WindowEvent obj){}
    public void windowActivated(WindowEvent obj){}

    public void windowDeiconified(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}

    public void windowClosed(WindowEvent obj){}
    public void windowOpened(WindowEvent obj){}

    public void windowClosing(WindowEvent obj){}
    {
        System.exit(0);
    }
}
