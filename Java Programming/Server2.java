import java.io.*;
import java.net.*;

class Server2
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Server Application is running");
        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server Application is running at port : 2100");

        Socket s = ssobj.accept();
        System.out.println("Server and Client connection successfull...");

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Chat Messenger started...");
        String str1 , str2;
        while((str1 = br1.readLine()) != null)
        {
            System.out.println("Client says : " + str1);
            System.out.println("Enter message for Client : ");
            str2 = br2.readLine();
            ps.println(str2);
        }
        System.out.println("Thankyou for using Chat Messenger!");
    }    
}
