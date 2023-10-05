class Overloading1
{
    public static void main(String Arg[])
    {
        int a = 2 , b = 3 , c = 5;
        double x = 6.7 , y = 9.9 , z = 5.6;
        int iRet = 0;
        double dRet = 0;

        Demo obj = new Demo();

        iRet = obj.Addition(a , b );
        System.out.println(iRet);
        dRet = obj.Addition(x , y , z);
        System.out.println(dRet);
    }
}

class Demo
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