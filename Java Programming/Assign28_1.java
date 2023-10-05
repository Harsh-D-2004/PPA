import java .util.Scanner;

class Assign28_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iSize = 0;
        System.out.println("Enter the size of Array : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;
        System.out.println("Enter the elements of Array : ");

        for(iCnt = 0 ; iCnt<iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("The Elements of Array are : ");
        for(iCnt = 0 ; iCnt<iSize ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        sobj.close();
    }    
}
