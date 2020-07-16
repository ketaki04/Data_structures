//creating a seperate class

public class prac {
    private String girlname;         //this is a instance variable

    public prac(String name)
    {
        girlname=name;

    }

// public void simpleMessage (String name)  //creating a method
//     {
//         System.out.println("Ths is another class");
//         //System.out.println("Hello"+ name);
//         girlname=name;
//     }
public String getName()
{
    return girlname;
}    
public void say()
{
    System.out.printf("My new gf is %s",getName());
}

}
/********************************************
 * If we try to run the program it will not output anything
 * because there is no main method present and the complier will not
 * understand from where to start , thus we need to include this class in the main method*/