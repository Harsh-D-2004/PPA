import java.util.*;

class AgeInvalid2 extends Exception
{ 
    public AgeInvalid2(String str)
    {
        super(str);
    }
}

class UserDefined2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Age = 0;

        System.out.println("Enter your Age : ");
        Age = sobj.nextInt();

        try 
        {
            if(Age<18)
            {
                throw new AgeInvalid2("Age is less then 18 ");
            }
        }    
        catch(AgeInvalid2 obj)
        {
            System.out.println(obj);
        }
        finally
        {

        }
        // sobj.close();
    }
}