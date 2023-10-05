class Final1_1
{
    public static void main(String Arg[])
    {
        Demoxx dobj = new Demoxx(11 , 21 , 31);

        System.out.println(dobj.no1);
        System.out.println(dobj.no2);
        System.out.println(dobj.no3);
    }    
}

class Demoxx
{
    public int no1;
    public final int no2;
    public final int no3;

    Demoxx(int i , int j , int k)
    {
        this.no1 = i;
        this.no2 = j;
        this.no3 = k;
    }
}
