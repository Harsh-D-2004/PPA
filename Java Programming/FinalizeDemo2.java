class FinalizeDemo2
{
    public static void main(String Arg[])
    {
        Prac1 pobj1 = new Prac1();
        Prac1 pobj2 = new Prac1(11 , 21);

        pobj1 = null;
        pobj2 = null;

        System.gc();
    }    
}

class Prac1
{
    public int no1;
    public int no2;

    public Prac1()
    {
        System.out.println("Inside Default constructor");
        no1 = 0;
        no2 = 0;
    }

    public Prac1(int i , int j)
    {
        System.out.println("Inside Parametrised constructor");
        no1 = i;
        no2 = j;
    }

    protected void finalize()
    {
        System.out.println("Inside finalize");
    }
}