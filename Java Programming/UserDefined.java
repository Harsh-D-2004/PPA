import java.util.Scanner;

class UserDefined
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        int Age = 0;
        
        System.out.println("Enter ur age : ");
        Age = sobj.nextInt();

        try 
        {
            if(Age<18)
            {
                throw new AgeInvalid("Age is less than 18");
            }
        }    
        catch(AgeInvalid obj)
        {
            System.out.println(obj);
        }
        finally
        {

        }
    }    
}

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}