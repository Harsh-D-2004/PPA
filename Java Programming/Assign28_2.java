import java .util.Scanner;

class Assign28_2
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

        System.out.println("The Average of Elements of Array is : ");
        int sum = 0;
        for(iCnt = 0 ; iCnt<iSize ; iCnt++)
        {
            sum = sum + Arr[iCnt];
        }
        int Ans = sum/2;
        System.out.println(Ans);


        sobj.close();
    }    
}
