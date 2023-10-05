class Single
{
    public static void main(String Arg[])
    {
        // Base bobj = new Base();
        Derived dobj = new Derived();
        // Base bobj2 = new Derived();
        // Derived dobj2 = new Base();

        dobj.fun();
        dobj.gun();
        System.out.println(dobj.a);
        System.out.println(dobj.b);
        System.out.println(dobj.x);
        System.out.println(dobj.y);
    }
}

class Base
{
    public int a;
    public int b;

    public Base()
    {
        System.out.println("Inside Base constructor");
        this.a = 11;
        this.b = 21;
    }

    public void fun()
    {
        System.out.println("Inside base fun");
    }
}

class Derived extends Base
{
    public int x;
    public int y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.x = 51;
        this.y = 101;
    }

    public void gun()
    {
        System.out.println("Inside derived gun");
    }
}