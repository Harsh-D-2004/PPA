import java.util.Scanner;

class ExceptionDemo
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int no1 = 0 , no2 = 0;
        float Ans = 0.0f;

        System.out.println("Enter the first number ");
        no1 = sobj.nextInt();

        System.out.println("Enter the second number ");
        no2 = sobj.nextInt();

        Ans = no1/no2;

        System.out.println("Division is " + Ans);
    }
}