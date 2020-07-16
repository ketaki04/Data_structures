//Using multiple classes and method parameters
import java.util.Scanner;

class learn{
public static void main(String[] args)
{
  Scanner input=new Scanner(System.in);
  prac pracObject =new prac("ketaki");      //as we have created a construtor in the class
                                              //here we can pass the name of the girl immediatly 
// System.out.println("Enter name");
//   String name=input.nextLine();  
         
 //pracObject.simpleMessage(name);
  pracObject.say();

}
//to use the method of another class we need to create its object
//once we create the object as above pracObject by using dot operator 
//we can uses the method of the prac class.


}