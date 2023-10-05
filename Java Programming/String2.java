class String2
{
    public static void main(String Arg[])
    {
        String str1 = "Hello";
        String str2 = new String("Hello");

        System.out.println("The length of the string is : " + str1.length());

        if(str1 == str2)
        {
            System.out.println("Equal strings");
        }
        else
        {
            System.out.println("Not Equal");
        }

        if(str1.equals(str2))
        {
            System.out.println("Equal strings");
        }
        else
        {
            System.out.println("Not Equal");
        }
    }
}
