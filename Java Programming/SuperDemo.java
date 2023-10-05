class SuperDemo
{
    public static void main(String Arg[])
    {
        Derived3 dobj = new Derived3();

        dobj.gun();
    }
}

class Base3
{
    public int a;

    public Base3()
    {
        System.out.println("Inside Base3 default constructor");
        this.a = 11;
    }

    public Base3(int i)
    {
        System.out.println("Inside Base3 parametrised constructor");
        this.a = i;
    }

    public void fun()
    {
        System.out.println("Inside Base3 fun");
    }
}

class Derived3 extends Base3
{
    public int a;

    public Derived3()
    {
        super(11);
        System.out.println("Inside Derived3 constructor");
        this.a = 51;
    }

    public void gun()
    {
        System.out.println("Inside Derived3 gun");
        System.out.println("Value of a " + a);
        super.fun();
    }
}