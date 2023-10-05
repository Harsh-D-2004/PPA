import java.io.*;

class BufferInput
{
    public static void main(String Arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int no1 = 0 , no2 = 0;
        int Ans = 0;

        try 
        {
            System.out.println("Enter the first number : ");
            no1 = Integer.parseInt(bobj.readLine());

            System.out.println("Enter the second number : ");
            no2 = Integer.parseInt(bobj.readLine());
        }
        catch(IOException obj)
        {

        }
        Ans = no1 + no2;
        System.out.println("The answer is : " + Ans);
    }    
}
