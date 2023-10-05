import java.util.*;

class Collections
{
    public static void main(String Arg[])
    {
        System.out.println("Collections framework");

        //Typesafe collection
        ArrayList<Integer> numbers = new ArrayList<Integer>(7);

        numbers.add(34);
        numbers.add(67);
        numbers.add(45);
        numbers.add(45);
        numbers.add(36);

        System.out.println(numbers);
        // System.out.println(numbers.get(3));
        
        //Untype Safe
        
        // LinkedList list = new LinkedList();
        
        // list.add("Harsh");
        // list.add(78);
        // list.add(true);
        
        // System.out.println(list);
        
        numbers.remove(3);
        System.out.println(numbers);
        System.out.println(numbers.size());
        System.out.println(numbers.contains(30));
        
    }
    

}
