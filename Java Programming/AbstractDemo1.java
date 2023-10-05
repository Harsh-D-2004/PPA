class AbstractDemo1
{
    public static void main(String Arg[])
    {
        SBIx sobj = new SBIx();
        BOMx bobj = new BOMx();

        float fRet = 0.0f;
        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI is " , fRet);

        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM is " , fRet);
        
        sobj.DisplayRules();
        bobj.DisplayRules();

    }    
}

abstract class RBIx
{
    public abstract float CalculateROI();

    public void DisplayRules()
    {
        System.out.println("Rule1");
    }
}

class SBIx extends RBIx
{
    public float CalculateROI()
    {
        return 5.7f;
    }
}

class BOMx extends RBIx
{
    public float CalculateROI()
    {
        return 7.7f;
    }
}