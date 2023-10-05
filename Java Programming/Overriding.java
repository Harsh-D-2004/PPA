class Overriding
{
    public static void main(String Arg[])
    {
        Base4 bobj = new Derived4();
        bobj.fun(); //derived fun
        bobj.gun(); //derived gun
        bobj.sun(); //base sun
        // bobj.run(); //Error
    }
}

class Base4
{
    public void fun()
    {
        System.out.println("Base Fun");
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

class Derived4 extends Base4
{
    public void fun()
    {
        System.out.println("Derived Fun");
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
