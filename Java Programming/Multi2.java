class Multi2
{
    public static void main(String A[])
    {
        Marvellousx mobj1 = new Marvellousx();
        Marvellousx mobj2 = new Marvellousx();

        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();
        t2.start();
    }
}

class Marvellousx implements Runnable
{
    public void run()
    {
        for(int i = 1 ; i<100000 ; i++)
        {
            System.out.println(i);
        }
    }
}