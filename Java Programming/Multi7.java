class Multi7
{
    public static void main(String A[]) throws Exception
    {
        Marvellous4 mobj1 = new Marvellous4();
        Marvellous4 mobj2 = new Marvellous4();

        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("End of main");
    }
}

class Marvellous4 extends Thread
{
    public void run()
    {
        Display();
    }

    synchronized public void Display()
    {
        for(int i = 1 ; i<10 ; i++)
        {
            System.out.println(i);
        }
    }

}