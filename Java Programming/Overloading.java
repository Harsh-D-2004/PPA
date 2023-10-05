class Overloading
{
    public static void main(String Arg[])
    {
        Demo2 obj = new Demo2();
        int a = 10 , b  =20 , c = 30 , iRet = 0;
        double x = 10.8 , y = 90.7 , z = 70.9 , dRet = 0;

        iRet = obj.Addition(a,b);
        iRet = obj.Addition(a, b, c);
        dRet = obj.Addition(x , y);
        dRet = obj.Addition(x , y ,z);
    }
}

class Demo2
{
    public int Addition(int a , int b)
    {
        return a + b;
    }
    public int Addition(int a , int b , int c)
    {
        return a + b + c;
    }
    public double Addition(double a , double b)
    {
        return a + b;
    }
    public double Addition(double a , double b , double c)
    {
        return a + b + c;
    }
}