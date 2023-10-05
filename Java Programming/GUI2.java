import java.awt.*;

class GUI2
{
    public static void main(String a[])
    {
        MarvellousFrame fobj = new MarvellousFrame("PPA");
    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj =  new Frame(title);
        fobj.setSize(500 , 500);
        fobj.setVisible(true);
    }
}