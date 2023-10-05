import javax.swing.*;

class SwingDemo
{
    public static void main(String a[])
    {
        MarvellousFrame2x fobj = new MarvellousFrame2x("PPA");
    }
}

class MarvellousFrame2x
{
    public MarvellousFrame2x(String title)
    {
        JFrame fobj =  new JFrame(title);
        fobj.setSize(500 , 500);
        fobj.setVisible(true);
    }
}