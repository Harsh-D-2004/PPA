import Jpack.*;
import Jpack.Jutils.U1;

class Jpack
{
    public static void main(String Arg [])
    {
        int no1 = 10 , no2 = 20;
        int iRet = 0;

        P1 pobj1 = new P1();
        P2 pobj2 = new P2();
        U1 uobj = new U1();

        iRet = pobj1.Addition(no1 , no2);
        System.out.println("Addition is : " + iRet);

        iRet = pobj1.Subtraction(no1 , no2);
        System.out.println("Subtraction is : " + iRet);

        iRet = pobj2.Square(no1);
        System.out.println("Square is : " + iRet);

        iRet = pobj2.Cube(no1);
        System.out.println("Cube is : " + iRet);

        uobj.fun();
    }
}