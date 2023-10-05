class Single2
{
    public static void main(String Arg[])
    {
        Derived dobj = new Derived();

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
    public int x;
    public int y;

    public Base()
    {
        System.out.println("Inside Base constructor");
        this.x = 10;
        this.y = 20;
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int a;
    public int b;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        a = 30;
        b = 40;
    }

    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}