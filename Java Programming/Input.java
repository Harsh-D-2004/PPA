import java.util.*;

class Input 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number: ");
        int ino1 = sobj.nextInt();

        System.out.println("Enter Second number: ");
        int ino2 = sobj.nextInt();

        int ians = 0;
        ians = ino1 + ino2;
        System.out.println("Addition is : " + ians);
    }    
}