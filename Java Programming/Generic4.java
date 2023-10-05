class Generic4
{
    public static void main(String Arg[])
    {
        Displayx<Integer> dobj1 = new Displayx<Integer>();
        Displayx<Float> dobj2 = new Displayx<Float>();

        dobj1.Accept(23);
        dobj1.Display();

        dobj2.Accept(11.22f);
        dobj2.Display();

    }
}

class Displayx <T>
{
    public T no;
    public void Accept(T i)
    {
        no = i;
    }

    public void Display()
    {
        System.out.println("The number is : " + no);
    }
}