class Heirarchal
{
    public static void main(String Arg[])
    {
        Derivedx2 dobj = new Derivedx2();

        dobj.fun();
        System.out.println(dobj.a);
        System.out.println(dobj.b);
        System.out.println(dobj.z);
    }
}

class Base2
{
    public int a;
    public int b;

    public Base2()
    {
        System.out.println("Inside Base2 constructor");
        this.a = 11;
        this.b = 21;
    }

    public void fun()
    {
        System.out.println("Inside Base2 fun");
    }
}

class Derived2 extends Base2
{
    public int x;
    public int y;

    public Derived2()
    {
        System.out.println("Inside Derived2 constructor");
        this.x = 51;
        this.y = 101;
    }

    public void gun()
    {
        System.out.println("Inside Derived2 gun");
    }
}

class Derivedx2 extends Base2
{
    public int z;

    public Derivedx2()
    {
        System.out.println("Inside Derivedx2 constructor");
        this.z = 999;
    }
}