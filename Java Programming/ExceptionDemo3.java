class ExceptionDemo3
{
    public static void main(String Arg[])
    {
        Div dobj = new Div();
        float fRet = 0.0f;

        try 
        {
            fRet = dobj.Division(11 , 0);
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured ....");
        }
        finally
        {
            System.out.println("The division is " + fRet);
        }
    }
}


class Div
{
    public float Division(int no1 , int no2) throws ArithmeticException
    {
        return no1 / no2;
    }
}