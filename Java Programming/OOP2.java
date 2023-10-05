class OOP2
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main function");

        Arithmetic2 obj1 = new Arithmetic2();
        Arithmetic2 obj2 = new Arithmetic2(10 , 20);
        
        int iRet = 0;
        iRet = obj1.addition();
        System.out.println("Addition is " + iRet);

        iRet = obj1.subtraction();
        System.out.println("Subtraction is " + iRet);

        iRet = obj2.addition();
        System.out.println("Addition is " + iRet);

        iRet = obj2.subtraction();
        System.out.println("Subtraction is " + iRet);
    }
}    

class Arithmetic2
{
    public int no1;
    public int no2;

    public Arithmetic2()
    {
        System.out.println("Inside default constructor");
        this.no1 = 0;
        this.no2 = 0;
    }

    public Arithmetic2(int i , int j)
    {
        System.out.println("Inside parametrised constructor");
        this.no1 = i;
        this.no2 = j;
    }

    public int addition()
    {
        int ans = 0;
        ans = this.no1 + this.no2;
        return ans;
    }

    public int subtraction()
    {
        int ans = 0;
        ans = this.no1 - this.no2;
        return ans;
    }
}