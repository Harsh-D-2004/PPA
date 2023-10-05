import java.util.Scanner;


class ExceptionDemoX2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[5];
        Arr[0] = 10;
        Arr[1] = 20;
        Arr[2] = 30;
        Arr[3] = 40;
        Arr[4] = 50;

        int index = 0;
        System.out.println("Enter the index : ");
        index = sobj.nextInt();

        try
        {
            System.out.println("Index value is " + Arr[index]);
        }
        catch(IndexOutOfBoundsException obj)
        {
            System.out.println("The error which has been catched is " + obj);
        }
        finally
        {
            System.out.println("Code is succesfully compiled....");
        }
        
    }    
}
