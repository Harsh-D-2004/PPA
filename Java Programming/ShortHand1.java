import java.awt.*;
import java.awt.event.*;

class ShortHand1 
{
    public static void main(String A[])
    {
        Frame fobj = new Frame("ShortHand");
        fobj.setSize(500 , 500);
        fobj.setVisible(true);

        Button bobj = new Button("OK");
        fobj.add(bobj);

        bobj.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent aobj)
            {
                System.out.println("Press");
            }
        });
    }
}