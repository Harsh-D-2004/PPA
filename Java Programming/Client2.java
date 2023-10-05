import java.io.*;
import java.net.*;

class Client2
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Client Server is running");

        System.out.println("Client is waiting for connection....");
        Socket s = new Socket("localhost" , 2100);

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Chat Messenger started...");
        String str1 , str2;
        while(!(str1 = br2.readLine()).equals("End"))
        {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("Enter the message for Server : " );
            System.out.println("Server says : " + str2);
        }
        System.out.println("Thankyou for using Chat Messenger!");
    }    
}
