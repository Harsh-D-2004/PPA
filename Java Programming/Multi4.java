class Multi4
{
    public static void main(String A[])
    {
        Marvellous1 mobj1 = new Marvellous1();
        Marvellous1 mobj2 = new Marvellous1();

        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();
        t2.start();
    }
}

class Marvellous1 extends Thread
{
    public void run()
    {
        try 
        {
            for(int i = 1 ; i<10 ; i++)
            {
                System.out.println(i);
                Thread.sleep(5000);
            }
        }
        catch(Exception obj)
        {

        }
    }
}