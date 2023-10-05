import java.util.*;

class Addition1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number ");
        int ino1 = sobj.nextInt();

        System.out.println("Enter the second number ");
        int ino2 = sobj.nextInt();

        int ians = 0;
        ians = ino1  + ino2;
        System.out.println("Addition is  " + ians);
    }

}