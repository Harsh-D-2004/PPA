import java.util.*;

class ArrayWhile2
{

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter the elements of array ");
        while(iCnt<iSize)
        {
            Arr[iCnt] = sobj.nextInt();
            iCnt++;
        }

        System.out.println("The elements are ");
        iCnt = 0;

        while(iCnt<iSize)
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        sobj.close();
    }
}