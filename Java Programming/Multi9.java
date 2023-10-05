class Multi9
{
    public static void main(String A[])
    {
        Marv3 mobj1 = new Marv3();
        Marv3 mobj2 = new Marv3();

        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();
        t2.start();
    }
}

class Marv3 extends Thread
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