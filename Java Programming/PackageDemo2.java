import Marvellous.A1;
import Marvellous.A2;



class PackageDemo2
{
    public static void main(String Arg[])
    {
        A1 aobj = new A1();
        A2 mobj = new A2();

        int iret = 0;
        iret = aobj.Addition(10 , 11);
        System.out.println("Addition is " + iret);

        iret = aobj.Subtraction(10 , 11);
        System.out.println("Subtraction is " + iret);

        iret = mobj.Square(10);
        System.out.println("Square is " + iret);

        iret = mobj.Cube(10);
        System.out.println("Cube is " + iret);
    }    
}
