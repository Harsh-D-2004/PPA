import java.util.*;

class Assign28_3 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int rows = 0 , columns = 0;

        System.out.println("Enter the number of rows : ");
        rows = sobj.nextInt();
        
        int Arr [][] = new int[rows][];

        int iCnt = 0;
        System.out.println("Enter the size of each row : ");

        for(iCnt = 0 ; iCnt<rows ; iCnt++)
        {
            columns = sobj.nextInt();
            Arr[iCnt] = new int[columns];
        }

        sobj.close();
    }    
}
