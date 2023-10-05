import java.awt.*;

class GUI3
{
    public static void main(String a[])
    {
        MarvellousFramex mobj = new MarvellousFramex("PPA");
    }
}

class MarvellousFramex
{
    public Frame fobj;

    public MarvellousFramex(String title)
    {
        fobj.new Frame(title);
        fobj.setSize(500 , 500);
        fobj.setVisible(true);
    }
}
