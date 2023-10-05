class CloneDemo2
{
    public static void main(String Arg[])
    {
        try 
        {
            Prac2 pobj1 = new Prac2("Aaron" , 66 , 20);
            Prac2 pobj2 = (Prac2)pobj1.clone();

            System.out.println("Name is : " + pobj1.name);
            System.out.println("Age is : " + pobj1.age);
            System.out.println("Marks is : " + pobj1.marks);

            System.out.println("Name is : " + pobj2.name);
            System.out.println("Age is : " + pobj2.age);
            System.out.println("Marks is : " + pobj2.marks);

        }
        catch(Exception obj)
        {}
    }    
}

class Prac2 implements Cloneable
{
    public int age;
    public int marks;
    public String name;

    public Prac2(String s , int m , int a)
    {
        this.name = s;
        this.marks = m;
        this.age = a;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
