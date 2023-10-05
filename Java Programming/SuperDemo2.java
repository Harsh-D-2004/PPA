class SuperDemo2
{
    public static void main(String Arg[])
    {
        Derivedx1 dobj = new Derivedx1();

        dobj.gun();
    }
}

class Basex
{
    public int x;
    public int b;

    public Basex()
    {
        System.out.println("Inside Basex default constructor");
        this.x = 11;
        this.b = 21;
    }

    public Basex(int i , int j)
    {
        System.out.println("Inside Basex parametrised constructor");
        this.x = i;
        this.b = j;
    }

    public void fun()
    {
        System.out.println("Inside Basex fun");
    }
}

class Derivedx1 extends Basex
{
    public int x;
    public int y;

    public Derivedx1()
    {
        super(222 , 333);
        System.out.println("Inside Derivedx1 constructor");
        this.x = 51;
        this.y = 101;
    }

    public void gun()
    {
        System.out.println("Inside Derivedx1 gun");
        System.out.println(this.x);
        System.out.println(super.x);
        System.out.println(x);
        super.fun();
    }
}