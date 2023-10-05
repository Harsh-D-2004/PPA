import java.util.*;

class ArrayFor2
{

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter the elements of array ");
        for(iCnt = 0 ; iCnt<iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("The elements are ");
        for(iCnt = 0; iCnt<iSize ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}