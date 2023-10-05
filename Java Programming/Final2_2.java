class Final2_2
{
    public static void main(String Arg[])
    {
        B1 bobj = new D2();

        bobj.fun();
        bobj.gun();
    }    
}

class B1
{
    public void fun()
    {
        System.out.println("Inside Base fun");
    }

    final public void gun()
    {
        System.out.println("Inside Base gun");
    }
}

class D2
{
    public void fun()
    {
        System.out.println("Inside Derived fun");
    }

    // public void gun()
    // {
    //     System.out.println("Inside Derived gun");
    // }
}
