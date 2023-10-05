class Array6
{
    public static void main(String Arg[])
    {

        int Arr[][] = new int[3][];

        Arr[0] = new int[3];
        Arr[1] = new int[5];
        Arr[2] = new int[2];

        Arr[0][0] = 10;
        Arr[0][1] = 20;
        Arr[0][2] = 30;

        Arr[1][0] = 40;
        Arr[1][1] = 50;
        Arr[1][2] = 60;
        Arr[1][3] = 70;
        Arr[1][4] = 80;

        Arr[2][0] = 90;
        Arr[2][1] = 100;

        System.out.println(Arr.length);
        System.out.println(Arr[0].length);
        System.out.println(Arr[1].length);
        System.out.println(Arr[2].length);
    }
}