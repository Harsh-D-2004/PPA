class Multilevel2
{
    public static void main(String Arg[])
    {
        ppa zobj = new ppa();

        zobj.fun();
        zobj.gun();

        System.out.println(zobj.a);
        System.out.println(zobj.b);
        System.out.println(zobj.x);
        System.out.println(zobj.y);
        System.out.println(zobj.z);
    }
}

class Base0
{
    public int x;
    public int y;

    public Base0()
    {
        System.out.println("Inside Base0 constructor");
        this.x = 10;
        this.y = 20;
    }

    public void fun()
    {
        System.out.println("Inside Base0 fun");
    }
}

class Derived0 extends Base0
{
    public int a;
    public int b;

    public Derived0()
    {
        System.out.println("Inside Derived0 constructor");
        a = 30;
        b = 40;
    }

    public void gun()
    {
        System.out.println("Inside Derived0 gun");
    }
}

class ppa extends Derived0
{
    public int z;
    public ppa()
    {
        System.out.println("Inside ppa constructor");
        this.z = 110;
    }
}