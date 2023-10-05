import java.io.*;


class InputDemo
{
    public static void main(String Arg[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the first number ");
        int no1 = Integer.parseInt(bobj.readLine());

        System.out.println("Enter the second number ");
        int no2 = Integer.parseInt(bobj.readLine());

        int Ans = no1 + no2;

        System.out.println("The answer is " + Ans);
    }
}