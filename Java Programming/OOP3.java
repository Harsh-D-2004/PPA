class OOP3
{
    public static void main(String Arg[])
    {
        A1x obj1 = new A1x();
        A1x obj2 = new A1x(11 , 21);

        int iRet = 0;

        iRet = obj1.Addition();
        System.out.println("Addition is : " + iRet);

        iRet = obj1.Subtraction();
        System.out.println("Subtraction is : " + iRet);

        iRet = obj2.Addition();
        System.out.println("Addition is : " + iRet);

        iRet = obj2.Subtraction();
        System.out.println("Subtraction is : " + iRet);

    }    
}

class A1x
{
    public int no1;
    public int no2;

    public A1x()
    {
        no1 = 0;
        no1 = 0;
    }

    public A1x(int i , int j)
    {
        no1 = i;
        no2 = j;
    }

    public int Addition()
    {
        int ans = 0;
        ans = this.no1 + this.no2;
        return ans;
    }

    public int Subtraction()
    {
        int ans = 0;
        ans = this.no1 - this.no2;
        return ans;
    }
}
