import java.awt.*;

class GUIx2
{
    public static void main(String A[])
    {
        framescreation fobj2 = new framescreation("GUIx2");
    }    
}

class framescreation
{
    public Frame fobj;
    
    public framescreation(String title)
    {
        fobj = new Frame(title);
        fobj.setSize(300 , 300);
        fobj.setVisible(true);
    }

}
