import Marvellous.Arithmetic;
import Marvellous.Mathematics;

class PackageDemo 
{
    public static void main(String Arg)
    {
        Arithmetic.aobj = new Arithmetic();
        Mathematics.mobj = new Mathematics();

        int iRet = 0;
        iRet = aobj.Addition(10 , 11);
        System.out.println("Addition is " + iRet);

        iRet = aobj.Subtraction(10 , 11);
        System.out.println("Subtraction is " + iRet);

        iRet = mobj.Square(10);
        System.out.println("Square is " + iRet);

        iRet = mobj.Cube(10);
        System.out.println("Cube is " + iRet);
    }
}