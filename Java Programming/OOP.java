class OOP
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main function");

        Arithmetic obj1 = new Arithmetic();
        Arithmetic obj2 = new Arithmetic(11 , 10);

        int iret  = 0;
        iret = obj1.Addition();
        System.out.println("Addition is :" + iret);
        iret = obj1.Subtraction();
        System.out.println("Subtraction is :" + iret);
        iret = obj2.Addition();
        System.out.println("Addition is :" + iret);
        iret = obj2.Subtraction();
        System.out.println("Subtraction is :" + iret);
    }   
}

class Arithmetic
{
    public int no1;
    public int no2;

    public Arithmetic() //Default constructor
    {
        System.out.println("Inside Default Constructor");
        this.no1 = 0;
        this.no2 = 0;
    }

    public Arithmetic(int i , int j)//Parametrised constructor
    {
        System.out.println("Inside Parametrised Constructor");
        this.no1 = i;
        this.no2 = j;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = this.no1 + this.no2;
        return Ans;
    }

    public int Subtraction()
    {
        int Ans = 0;
        Ans = this.no1 - this.no2;
        return Ans;
    }
} 