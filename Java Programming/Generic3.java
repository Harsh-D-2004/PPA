class Generic3
{
    public static void main(String Arg[])
    {
        Demox3 <Integer> obj1 = new Demox3<Integer>();
        obj1.Accept(11);
        obj1.Display();

        Demox3 <Double> obj2 = new Demox3<Double>();
        obj2.Accept(10.56);
        obj2.Display();
    }
}

class Demox3 <T>
{
    public T Value;

    public void Accept(T no)
    {
        Value = no;
    }
    public void Display()
    {
        System.out.println(Value);
    }
}