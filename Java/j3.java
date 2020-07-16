import java.util.Scanner;

class learn
{
 public static void main(String args[])
 {
   Scanner bucky=new Scanner(System.in);  //make a object of method scanner
   double fnum,snum,answer;               //floating point number
   System.out.println("Enter no 1");
   fnum=bucky.nextDouble();            //nexouble method to input double datatype
   System.out.println("Enter no 2");
   snum=bucky.nextDouble();
   answer=fnum+snum;
   System.out.println(answer);
  answer +=10;
  System.out.println(answer);


 }



}