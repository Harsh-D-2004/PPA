class Final
{
    public static void main(String Arg[])
    {
        Demo obj = new Demo(11 , 22 , 33);

        System.out.println(obj.no1);
        System.out.println(obj.no2);
        System.out.println(obj.no3);

        obj.no1 ++;
        // obj.no2 ++; Error
        // obj.no3 ++; Error
    }
}

class Demo
{
    public int no1;
    final public int no2;
    final public int no3;

    public Demo(int i , int j , int k)
    {
        this.no1 = i;
        this.no2 = j;
        this.no3 = k;
    }
}