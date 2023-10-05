class Generic2
{
    public static <T>void Display(T Arr[])
    {
        for(T no : Arr)
        {
            System.out.println(no);
        }
    }
    public static void main(String Arg[])
    {
        Integer A[] = {10 , 20 , 30 , 40};
        Float B[] = {50.11f , 60.11f , 70.11f};
        Double C[] = {30.45 , 22.22 , 11.11};

        Display(A);
        Display(B);
        Display(C);
    }
}