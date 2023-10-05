import java .util.*;

class Collection2
{
    public static void main(String Arg[])
    {
        ArrayList <Integer> lobj = new ArrayList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println("Elements are : " + lobj);

        Iterator iobj = lobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }    
}