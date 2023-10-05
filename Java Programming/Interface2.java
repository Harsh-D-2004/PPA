class Interface2
{
    public static void main(String Arg[])
    {
        CircleIMP obj = new CircleIMP();
        float fRet = 0.0f;

        fRet = obj.CalculateArea(10.7f);
        System.out.println("The Area is " + fRet);

        fRet = obj.CalculateCircumference(23.23f);
        System.out.println("The Circumference is " + fRet);
    }    
}

interface Circlex
{
    public final float PI = 3.14f;

    public float CalculateArea(float R);
    public float CalculateCircumference(float R);
}

class CircleIMP implements Circlex
{
    public float CalculateArea(float R)
    {
        return PI * R * R;
    }

    public float CalculateCircumference(float R)
    {
        return 2 * PI * R;
    }
}

