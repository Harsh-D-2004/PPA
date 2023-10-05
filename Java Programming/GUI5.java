import java.awt.*;
import java.awt.event.*;

class GUI5
{
    public static void main(String a[])
    {
        MarvellousFrame2 fobj = new MarvellousFrame2("PPA");
    }
}

class MarvellousFrame2
{
    public MarvellousFrame2(String title)
    {
        Frame fobj =  new Frame(title);
        fobj.setSize(500 , 500);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener1());
    }
}

class MarvellousListener1 extends WindowAdapter
{
    public void windowClosing(WindowEvent obj){}
    {
        System.exit(0);
    }
}
