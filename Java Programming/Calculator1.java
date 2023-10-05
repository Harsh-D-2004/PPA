import java.awt.*;
import java.awt.event.*;

class Calculator1
{
    public static void main(String Arg[])
    {
        MarvellousCalculatorx mobj = new MarvellousCalculatorx(400 , 400 , "Marvellous");
    }
}

class MarvellousCalculatorx extends WindowAdapter implements ActionListener
{
    public Frame  fobj;
    public Button b1 , b2 , b3 , b4;
    public TextField t1 , t2;
    public Label lobj;
    public int no1 , no2;

    public MarvellousCalculatorx(int width , int height , String title)
    {
        fobj = new Frame(title);
        
        fobj.addWindowListener(this);
        
        b1 = new Button("ADD");
        b2 = new Button("SUB");
        b3 = new Button("MULT");
        b4 = new Button("DIV");
        
        t1 = new TextField();
        t2 = new TextField();
        lobj = new Label();
        
        
        b1.setBounds(10 , 280 , 80 , 40);   //X , Y , W , H
        b2.setBounds(100 , 280 , 80 , 40);   //X , Y , W , H
        b3.setBounds(190 , 280 , 80 , 40);   //X , Y , W , H
        b4.setBounds(290 , 280 , 80 , 40);   //X , Y , W , H
        
        t1.setBounds(70 , 100 , 80 , 40);   //X , Y , W , H
        t2.setBounds(220 , 100 , 80 , 40);   //X , Y , W , H
        
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);
        
        fobj.add(t1);
        fobj.add(t2);

        fobj.add(lobj);
        lobj.setBounds(150 , 150 , 110 , 40);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        fobj.setSize(width , height);
        fobj.setLayout(null);
        fobj.setVisible(true);
    }

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)
    {
        try 
        {
            no1 = Integer.parseInt(t1.getText());
            no2 = Integer.parseInt(t2.getText());

            if(aobj.getSource() == b1)
            {
                lobj.setText("Addition is : " + (no1 + no2));
            }
            else if(aobj.getSource() == b2)
            {
                lobj.setText("Subtraction is : " + (no1 - no2));
            }
            else if(aobj.getSource() == b3)
            {
                lobj.setText("Multiplication is : " + (no1 * no2));
            }
            else if(aobj.getSource() == b4)
            {
                lobj.setText("Division is : " + (no1 / no2));
            }
            
        }
        catch(Exception eobj) 
        {}
    }
}