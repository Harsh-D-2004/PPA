import java.awt.*;
import java.awt.event.*;

class Calculatorx
{
    public static void main(String A[])
    {
        Calci cobj = new Calci(500 , 500 , "CacliX");
    }
}

class Calci extends WindowAdapter implements ActionListener
{
    public Frame fobj ;
    public TextField t1 , t2;
    public Button b1 , b2 , b3 , b4;
    public Label l1;
    public int No1 , No2;
    
    public Calci(int height , int width , String title)
    {
        fobj = new Frame(title);
        fobj.setSize(width , height);
        fobj.setLayout(null);
        fobj.setVisible(true);
        
        t1 = new TextField();
        t2 = new TextField();
        b1 = new Button("ADD");
        b2 = new Button("SUB");
        b3 = new Button("MULT");
        b4 = new Button("DIV");
        l1 = new Label();
        
        t1.setBounds(150 , 150 , 50 , 50);
        t2.setBounds(290 , 150 , 50 , 50);
        b1.setBounds(100 , 300 , 80 , 40);
        b2.setBounds(200 , 300 , 80 , 40);
        b3.setBounds(300 , 300 , 80 , 40);
        b4.setBounds(400 , 300 , 80 , 40);
        l1.setBounds(220 , 220 , 80 ,40);

        fobj.add(t1);
        fobj.add(t2);
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        fobj.add(l1);

        fobj.addWindowListener(this);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
    }    

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)
    {
        try
        {
            No1 = Integer.parseInt(t1.getText());
            No2 = Integer.parseInt(t2.getText());

            if(aobj.getSource() == b1)
            {
                l1.setText("Addition is " + (No1 + No2));
            }
            else if(aobj.getSource() == b2)
            {
                l1.setText("Addition is " + (No1 - No2));
            }
            else if(aobj.getSource() == b3)
            {
                l1.setText("Addition is " + (No1 * No2));
            }
            else if(aobj.getSource() == b4)
            {
                l1.setText("Addition is " + (No1 / No2));
            }
        }
        catch(Exception eobj)
        {
            
        }
    }    
}