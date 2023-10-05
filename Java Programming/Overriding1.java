class Overriding1
{
    public static void main(String Arg[])
    {
        Base101 bobj = new Derived101();

        bobj.fun();
        bobj.gun();
        bobj.sun();
        // bobj.run();
    }
}

class Base101
{
    public void fun()
    {
        System.out.println("Base fun");
    }
    public void gun()
    {
        System.out.println("Base gun");
    }
    public void sun()
    {
        System.out.println("Base sun");
    }
}

class Derived101 extends Base101
{
    public void fun()
    {
        System.out.println("Derived fun");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
    public void run()
    {
        System.out.println("Derived run");
    }
}