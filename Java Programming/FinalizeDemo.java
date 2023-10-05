class FinalizeDemo
{
    public static void main(String Arg[])
    {
        Marv5 mobj1 = new Marv5();
        Marv5 mobj2 = new Marv5(11 , 21);

        mobj1 = null;
        mobj2 = null;
        System.gc();
    }    
}

class Marv5
{
    public int no1;
    public int no2;
    public Marv5()
    {
        System.out.println("Inside Default Constructor");
        no1 = 0;
        no2 = 0;
    }
    public Marv5(int a , int b)
    {
        System.out.println("Inside Parametrised Constructor");
        no1 = a;
        no2 = b;
    }
    protected void finalize()
    {
        System.out.println("Inside Finalize method");
    }
}