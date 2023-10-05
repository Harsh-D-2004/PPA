class Multi6
{
    public static void main(String A[]) throws Exception
    {
        Marvellous3 mobj1 = new Marvellous3();
        Marvellous3 mobj2 = new Marvellous3();

        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("End of main");
    }
}

class Marvellous3 extends Thread
{
    public void run()
    {
        try 
        {
            for(int i = 1 ; i<10 ; i++)
            {
                System.out.println(i);
                Thread.sleep(1000);
            }
        }
        catch(Exception obj)
        {

        }
    }
}