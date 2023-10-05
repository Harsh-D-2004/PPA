class StringDemo1
{
    public static void main(String Arg[])
    {
        String str1 = "Hello";
        String str2 = new String("Hello");

        if(str1 == str2)
        {
            System.out.println("Equal");
        }
        else
        {
            System.out.println("Not Equal");
        }

        if(str1.equals(str2))
        {
            System.out.println("Equal");
        }
        else
        {
            System.out.println("Not Equal");
        }
    } 
}
