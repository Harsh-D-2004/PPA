class ThrowsDemo
{
    public static void main(String Arg[])
    {
        Demo dobj = new Demo();

        float fRet = 0.0f;

        try
        {
            fRet = dobj.Division(11 , 0);
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured....");
        }
        System.out.println("Division is " + fRet);

    }
}

class Demo
{
    public float Division(int no1 , int no2) throws ArithmeticException
    {
        return no1 / no2;
    }
}