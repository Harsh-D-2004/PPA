
class lambda1
{
    public static void main(String arg[])
    {
        // System.out.println("My system starts ...");

        // MyinterImpl mobj = new MyinterImpl();

        // Myinter i1 = new Myinter() {
        //     @Override
        //     public void sayHello()
        //     {
        //         System.out.println("This is first anonymous class");
        //     }
        // };

        // Myinter i2 = new Myinter() {
        //     @Override
        //     public void sayHello()
        //     {
        //         System.out.println("This is second anonymous class");
        //     }
        // };

        // i1.sayHello();
        // i2.sayHello();

        // Myinter i = () -> {
        //     System.out.println("This is my first time using lambda");
        // };

        // i.sayHello(); 

        // Myinter i2 = () -> {
        //     System.out.println("This is my second time using lambda");
        // };

        // i2.sayHello(); 

        // SumInter s1 = ( a ,  b) -> 
        // {
        //     return (a + b);
        // };

        // System.out.println(s1.Sum(2, 3));

        LengthInter l1 = (str) -> 
        {
            return str.length();
        };

        System.out.println("The length of string is : " + l1.lenstr("Harsh"));

    }
}

@FunctionalInterface
interface Myinter
{
    public abstract void sayHello();
}

@FunctionalInterface
interface SumInter
{
    public abstract int Sum(int a , int b);
}

@FunctionalInterface
interface LengthInter
{
    int lenstr(String str);
}

// class MyinterImpl implements Myinter
// {
//     public void sayHello()
//     {
//         System.out.println("Hello ....");
//     }
// }