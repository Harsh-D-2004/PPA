class Heirarchal2
{
    public static void main(String Arg[])
    {
        Derivedxx2 dobj2 = new Derivedxx2(11 , 21);
        // dobj2.no1 = 33;
        // dobj2.no2 = 55;

        System.out.println(dobj2.no1);
        System.out.println(dobj2.no2);
        System.out.println(dobj2.no5);
        System.out.println(dobj2.no6);
    }    
}

class Basexx
{
    public int no1;
    public int no2;

    public Basexx()
    {
        System.out.println("Inside default constructor of base");
        this.no1 = 0;
        this.no2 = 0;
    }

    public Basexx(int i , int j)
    {
        System.out.println("Inside parametrised constructor of base");
        this.no1 = i;
        this.no2 = j;
    }

    public void fun()
    {
        System.out.println("Inside Fun of base");
    }
}

class Derivedxx extends Basexx
{
    public int no3;
    public int no4;

    public Derivedxx()
    {
        System.out.println("Inside default constructor of Derived");
        this.no3 = 0;
        this.no4 = 0;
    }

    public Derivedxx(int i , int j)
    {
        System.out.println("Inside parametrised constructor of Derived");
        this.no3 = i;
        this.no4 = j;
    }

    public void gun()
    {
        System.out.println("Inside gun of Derived");
    }
}

class Derivedxx2 extends Basexx
{
    public int no5;
    public int no6;

    public Derivedxx2()
    {
        super(505 , 606);
        System.out.println("Inside default constructor of Derivedxx2");
        this.no5 = 0;
        this.no6 = 0;
    }

    public Derivedxx2(int i , int j)
    {
        this();
        System.out.println("Inside parametrised constructor of Derivedxx2");
        this.no5 = i;
        this.no6 = j;
    }
    
    public void sun()
    {
        System.out.println("Inside sun of Derivedxx2");
    }
}

