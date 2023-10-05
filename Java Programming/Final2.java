class Final2
{
    public static void main(String Arg[])
    {
        Demox obj = new Derivedx3();

        obj.fun();
        obj.gun();
    }
}

class Demox
{
    public void fun()
    {
        System.out.println("Inside Demox fun");
    }

    final public void gun()
    {
        System.out.println("Inside Demox gun");
    }
}

class Derivedx3 extends Demox
{
    public void fun()
    {
        System.out.println("Inside derivedx3 fun");
    }

    // public void gun()
    // {
    //     System.out.println("Inside dervedx3 gun");
    // }
}