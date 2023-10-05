class InterfaceDemo
{
    public static void main(String Arg[])
    {
        D3 dobj = new D3();
        float fRet = 0.0f;

        fRet = obj.CalculateArea(10);
        System.out.println("Area is " + fRet);

        fRet = obj.CalculateArea(10);
        System.out.println("Area is " + fRet);
    }
}

interface Circle
{
    public final float PI = 3.14f;

    public float CalculateArea(float Radius);
    public float CalculateCircumference(float Radius);
}

class D3 implements Circle
{
    public float CalculateArea(float Radius)
    {
        return PI * Radius * Radius;
    }

    public float CalculateCircumference(float Radius)
    {
        return 2 * PI * Radius;
    }
}