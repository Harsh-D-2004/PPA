class AbstractDemo
{
    public static void main(String Arg[])
    {
        // RBI robj = new RBI();
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet = 0.0f;
        fRet = sobj.calculateROI();
        System.out.println("ROI of SBI is " + fRet);

        fRet = bobj.calculateROI();
        System.out.println("ROI of BOM is " + fRet);
    }
}

abstract class RBI
{
    public abstract float calculateROI();
    public void DisplayRules()
    {
        System.out.println("You have to submit Addhar card and PAN card");
        System.out.println("Minimum balance is 10,000");
    }
}

class SBI extends RBI
{
    public float calculateROI()
    {
        return 5.7f;
    }
}

class BOM extends RBI
{
    public float calculateROI()
    {
        return 7.7f;
    }
}