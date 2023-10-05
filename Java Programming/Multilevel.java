class Multilevel
{
    public static void main(String Arg[])
    {
        Derivedx dobj = new Derivedx();

        dobj.fun();
        dobj.gun();
        System.out.println(dobj.a);
        System.out.println(dobj.b);
        System.out.println(dobj.x);
        System.out.println(dobj.y);
        System.out.println(dobj.z);
    }
}

class Base1
{
    public int a;
    public int b;

    public Base1()
    {
        System.out.println("Inside Base1 constructor");
        this.a = 11;
        this.b = 21;
    }

    public void fun()
    {
        System.out.println("Inside base1 fun");
    }
}

class Derived1 extends Base1
{
    public int x;
    public int y;

    public Derived1()
    {
        System.out.println("Inside Derived1 constructor");
        this.x = 51;
        this.y = 101;
    }

    public void gun()
    {
        System.out.println("Inside derived1 gun");
    }
}

class Derivedx extends Derived1
{
    public int z;

    public Derivedx()
    {
        System.out.println("Inside Derivedx constructor");
        this.z = 999;
    }
}