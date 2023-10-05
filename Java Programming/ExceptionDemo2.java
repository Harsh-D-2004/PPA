import java.util.*;

class ExceptionDemo2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0 , no2 = 0;
        float ans = 0.0f;
    
        System.out.println("Enter the first number : ");
        no1 = sobj.nextInt();
    
        System.out.println("Enter the second number : ");
        no2 = sobj.nextInt();
    
        try
        {
            ans = no1 / no2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured ...");
        }
        finally
        {
            System.out.println("The division is : " + ans);
        }
        sobj.close();
    }
}
